#ifndef _SSTL_STIR_LINEAR_BUFFER_HPP_
# define _SSTL_STIR_LINEAR_BUFFER_HPP_

#include <utility>
#include <algorithm>
#include <memory>
#include <iterator>

// This class describes a linear sequence of data, such as that used by std::string, vector, and deque.
// it does so in a somewhat parametric way to support the varying models of how data is copied.
namespace stir
{
	// this policy uses the <algorithm> and <memory> algorithms to implement copies.
	template <typename tElement>
	struct stdmemory_policy
	{
		static void move_memory(tElement *begin, tElement *end, tElement *dest)
		{
			if (begin < dest) // copy in this case, since we will not end up overwriting uncopied characters.
				std::copy(begin, end, dest);
			else
				std::copy(std::reverse_iterator<tElement*>(end),
				          std::reverse_iterator<tElement*>(begin),
						  std::reverse_iterator<tElement*>(dest + (end - begin))); // copy in a reverse sequence

		}
		static void uninitialized_move_memory(tElement *begin, tElement *end, tElement *dest, tElement *uninit)
		{
			uninit = std::max(uninit, dest); // make sure uninit isn't < dest
			uninit = std::min(uninit, dest + (end - begin)); // prevent uninit from being far enough out to screw everything up.

			if (begin < dest) // normal copy here
			{
				std::copy(begin, begin + (uninit - dest), dest);
				std::uninitialized_copy(begin + (uninit - dest), end, uninit);
			} else { 
				// note that when moving backwards, it is *impossible* to be doing so into uninitialized memory (at least in this model)
				std::copy(std::reverse_iterator<tElement*>(end),
				          std::reverse_iterator<tElement*>(begin),
						  std::reverse_iterator<tElement*>(dest + (end - begin))); // copy in a reverse sequence
			}
		}
		static void fill_memory(tElement *begin, tElement *end, const tElement &elem)
		{
			std::fill(begin, end, elem);
		}
		static void uninitialized_fill_memory(tElement *begin, tElement *uninit, tElement *end, const tElement &elem)
		{
			std::fill(begin, uninit, elem);
			std::uninitialized_fill(uninit, end, elem);
		}
		template <typename tInputIterator>
		static void assign_memory(tElement *begin, tElement *end, tInputIterator input)
		{
			while (begin != end)
				*begin++ = *input++;
		}
		static void assign_memory(tElement *begin, tElement *end, tElement *input)
		{
			std::copy(input, input + (end - begin), begin);
		}
		template <typename tInputIterator>
		static void uninitialized_assign_memory(tElement *begin, tElement *uninit, tElement *end, tInputIterator input)
		{
			while (begin != uninit)
				*begin++ = *input++;
			// make an uninitialized iterator
			std::raw_storage_iterator<tElement *, tElement> uninit_begin(begin), uninit_end(end);
			while (uninit_begin != uninit_end)
				*uninit_begin++ = *input++;
		}
		static void uninitialized_assign_memory(tElement *begin, tElement *uninit, tElement *end, tElement *input)
		{
			begin = std::copy(input, input + (uninit - begin), begin);
			std::uninitialized_copy(input + (uninit - begin), input + (end - begin), begin);
		}
	};

	// this policy uses the functions of the traits class to do it's work.
	// it also ignores whether memory is initialized or not. Other standard libraries seem to do this as
	// well, and it seems normal to assume that string classes are for POD data that does not benefit
	// from inplace instantiation. Perhaps this needs more looking into though.
	template <typename tElement, typename tTraits = std::char_traits<tElement> >
	struct string_memory_policy
	{
		static void move_memory(tElement *begin, tElement *end, tElement *dest)
		{
			tTraits::move(dest, begin, end - begin);
		}
		static void uninitialized_move_memory(tElement *begin, tElement *end, tElement *dest, tElement *uninit)
		{
			tTraits::move(dest, begin, end - begin);
		}
		static void fill_memory(tElement *begin, tElement *end, const tElement &elem)
		{
			tTraits::assign(begin, end - begin, elem);
		}
		static void uninitialized_fill_memory(tElement *begin, tElement *uninit, tElement *end, const tElement &elem)
		{
			tTraits::assign(begin, end - begin, elem);
		}
		template <typename tInputIterator>
		static void assign_memory(tElement *begin, tElement *end, tInputIterator input)
		{
			while (begin != end)
				tTraits::assign(*begin++, *input++);
		}
		static void assign_memory(tElement *begin, tElement *end, tElement *input)
		{
			tTraits::copy(begin, input, end - begin);
		}
		template <typename tInputIterator>
		static void uninintialized_assign_memory(tElement *begin, tElement *end, tInputIterator input)
		{
			assign_memory<tInputIterator>(begin, end, input);
		}
	};
	 
	template <
		typename tElement, 
		typename tAllocatorPolicy = std::allocator<tElement>,
		typename tMemoryPolicy = stdmemory_policy<tElement> 
	>
	class linear_buffer : protected tMemoryPolicy
	{
	public:
		typedef tAllocatorPolicy                            allocator_type;
		typedef tElement                                    element_type;

		typedef typename allocator_type::pointer            pointer;
		typedef typename allocator_type::const_pointer      const_pointer;
		typedef typename allocator_type::reference          reference;
		typedef typename allocator_type::const_reference    const_reference;

		typedef typename allocator_type::size_type          size_type;

	private:
		allocator_type                                      mAlloc;

		pointer                                             mBegin;
		pointer                                             mEnd;
		pointer                                             mReserve;

	public:
		linear_buffer(size_type initcount, const allocator_type &alloc = allocator_type())
		 : mAlloc(alloc)
		{
			// we add one to whatever is passed in to prevent an allocation of zero.
			mBegin = mEnd = mAlloc.allocate(initcount + 1);
			mReserve = mBegin + initcount + 1;
		}

		~linear_buffer()
		{
			for (pointer it = mBegin; it < mEnd; it++)
				mAlloc.destroy(it);
			mAlloc.deallocate(mBegin, mReserve - mBegin);
		}

		pointer begin() const
		{
			return mBegin;
		}
		pointer end() const
		{
			return mEnd;
		}

		void reserve(size_type count)
		{
			size_type max = mAlloc.max_size();
			if (count > max)
				throw std::length_error("stir::linear_buffer::reserve count > max_alloc");

			// make sure count > 1
			if (count < 1)
				count = 1;

			if (count > size())
			{
				size_type newLen = mReserve - mBegin;
				while (newLen < count)
					newLen *= 2;

				if (newLen > max)
					newLen = max;

				pointer newBegin, newEnd, newReserve;

				newBegin = mAlloc.allocate(newLen);
				newEnd = newBegin + (mEnd - mBegin);
				newReserve = newBegin + newLen;

				// maybe there should be a normal copy routine after all. Still, this shouldn't hurt much.
				uninitialized_assign_memory(newBegin, newBegin, newBegin + (mEnd - mBegin), mBegin); // uninit memory starts right at newBegin

				mAlloc.deallocate(mBegin, mReserve - mBegin);

				std::swap(mBegin, newBegin);
				std::swap(mEnd, newEnd);
				std::swap(mReserve, newReserve);
			}
		}
		size_type capacity() const
		{
			return mReserve - mBegin;
		}
		// split defines the point where, if the array is shrinking, we want to collapse
		// everything, or if it's expanding, where we want to leave room. So for example,
		// if we have an array of size 12, and we resize to 16 with a split at 5, we will end up with
		// [0,5)->[0,5) and [5,12)->[9-16)
		// or if we have an array of size 12 and we resize to 10 with a split at 5, we will end up with
		// [0,5)->[0,5) and [7-12)->[5-10)
		// if there is no split, split == size() (before call).
		// returns the area left over to fill, if any.
		std::pair<pointer, size_type> resize(size_type count, size_type split, size_type pad = 0)
		{
			reserve(count + pad); // reserve enough memory first
			size_type curlen = mEnd - mBegin;

			std::pair<pointer, size_type> fill(mBegin, 0);

			if (count > curlen) // growing.
			{
				uninitialized_move_memory(mBegin + split, mEnd, mBegin + split + (count - curlen), mEnd);

				fill = std::make_pair(mBegin + split, (count - curlen));

			} else if (count < size()) { // shrinking
				//contract split into the new length of the string
				split = std::min(split, count);

				move_memory(mBegin + split + (curlen - count), mEnd, mBegin + split);
				// destroy elements after
				for (pointer it = (mBegin + count); it != (mBegin + curlen); it++)
					mAlloc.destroy(it);
			}
			mEnd = mBegin + count;
			return fill;
		}
		void resize_fill(size_type count, size_type split, const tElement &fill, size_type pad = 0)
		{
			// get the position where we're currently initialized to
			size_type uninit = size();

			std::pair<pointer, size_type> fillptr;
			fillptr = resize(count, split);

			if ( ((begin() + uninit) >= fillptr.first) && 
				 ((begin() + uninit) < (fillptr.first + fillptr.second)) )
				uninitialized_fill_memory(fillptr.first, begin() + uninit, fillptr.first + fillptr.second, fill);
			else
				fill_memory(fillptr.first, fillptr.first + fillptr.second, fill);
		}
		template <typename tInputIt>
		void resize_copy(size_type count, size_type split, tInputIt copy, size_type pad = 0)
		{
			// get the position where we're currently initialized to
			size_type uninit = size();

			std::pair<pointer, size_type> fillptr;
			fillptr = resize(count, split);

			if ( ((begin() + uninit) >= fillptr.first) &&
				 ((begin() + uninit) < (fillptr.first + fillptr.second)) )
				uninitialized_assign_memory(fillptr.first, begin() + uninit, fillptr.first + fillptr.second, copy);
			else
				assign_memory(fillptr.first, fillptr.first + fillptr.second, copy);
		}

		// these two functions 
		size_type size() const
		{
			return mEnd - mBegin;
		}

		size_type max_size() const
		{
			return mAlloc.max_size();
		}

        allocator_type &get_allocator()
		{
			return mAlloc;
		}
		allocator_type get_allocator() const
		{
			return mAlloc;
		}

		void swap(linear_buffer &y)
		{
			std::swap(mBegin, y.mBegin);
			std::swap(mEnd, y.mEnd);
			std::swap(mReserve, y.mReserve);
			std::swap(mAlloc, y.mAlloc);
		}
	};

	template <typename tElement, typename tMemoryPolicy, typename tAllocatorPolicy>
	void swap(linear_buffer<tElement, tMemoryPolicy, tAllocatorPolicy> &x,
	          linear_buffer<tElement, tMemoryPolicy, tAllocatorPolicy> &y)
	{
		x.swap(y);
	}
}

#endif
