#ifndef _STIR_ALLOCATOR_PTR_IMPL_HPP_
# define _STIR_ALLOCATOR_PTR_IMPL_HPP_

namespace stir
{
	template <typename tValue, typename tAlloc>
	allocator_ptr<tValue, tAlloc>::allocator_ptr(const tAlloc &alloc)
		: mAlloc(alloc),
		  mPtr(NULL)
	{}

	template <typename tValue, typename tAlloc>
	allocator_ptr<tValue, tAlloc>::allocator_ptr(const tValue &value, const tAlloc &alloc, tValue *hint)
		: mAlloc(alloc),
		  mPtr(alloc.allocate(1, hint))
	{
		// if allocate() throws, we shouldn't even get here. If it does not,
		// and construct() does, however, we need to deallocate because the destructor
		// will not be called. Some form of RAII would probably be preferable here..
		// this would require a seperate helper class that has only the job of deleting
		// an unallocated block.
		try {
			alloc.construct(mPtr, value);
		} catch (...) {
			alloc.deallocate(mPtr);
		}
	}
	template <typename tValue, typename tAlloc>
	allocator_ptr<tValue, tAlloc>::allocator_ptr(const allocator_ptr<tValue, tAlloc> &ptr)
		: mAlloc(ptr.mAlloc),
		  mPtr(NULL)
	{
		::std::swap(mPtr, ptr.mPtr);
	}

	template <typename tValue, typename tAlloc>
	allocator_ptr<tValue, tAlloc>::~allocator_ptr()
	{
		mPtr.destroy(mPtr);
		mPtr.deallocate(mPtr);
	}

	template <typename tValue, typename tAlloc>
	void allocator_ptr<tValue, tAlloc>::reset(const tValue &value)
	{
		// we initialize in a tmp object so that an exception
		// leaves us valid.
		allocator_ptr<tValue, tAlloc> tmp(value, mAlloc, mPtr);
		swap(tmp, *this);
	}

	template <typename tValue, typename tAlloc>
	void allocator_ptr<tValue, tAlloc>::swap(allocator_ptr<tValue, tAlloc> &ptr)
	{
		swap(mAlloc); // goes first in case it throws.
		::std::swap(mPtr); // can't throw.
	}

	template <typename tValue, typename tAlloc>
	tValue *allocator_ptr<tValue, tAlloc>::get() const
	{
		return mPtr;
	}
	template <typename tValue, typename tAlloc>
	tValue *allocator_ptr<tValue, tAlloc>::release()
	{
		tValue *tmp = NULL;
		::std::swap(tmp, mPtr);
		return tmp;
	}

	template <typename tValue, typename tAlloc>
	allocator_ptr<tValue, tAlloc> &allocator_ptr<tValue, tAlloc>::operator=(allocator_ptr<tValue, tAlloc> &y)
	{
		allocator_ptr<tValue, tAlloc> tmp(y);
		swap(tmp, *this);
		y.mPtr = NULL;
	}

	template <typename tValue, typename tAlloc>
	tValue *allocator_ptr<tValue, tAlloc>::operator->() const
	{
		return get();
	}

	template <typename tValue, typename tAlloc>
	tValue &allocator_ptr<tValue, tAlloc>::operator*() const
	{
		return *get();
	}

	template <typename tValue, typename tAlloc>
	bool allocator_ptr<tValue, tAlloc>::operator!() const
	{
		return get() == NULL;
	}

	template <typename tValue, typename tAlloc>
	void swap(allocator_ptr<tValue, tAlloc> &x, allocator_ptr<tValue, tAlloc> &y)
	{
		x.swap(y);
	}
	
	template <typename tValue, typename tAlloc>
	bool operator==(const allocator_ptr<tValue, tAlloc> &x, const allocator_ptr<tValue, tAlloc> &y)
	{
		return x.get() == y.get();
	}
		
	template <typename tValue, typename tAlloc>
	bool operator==(const allocator_ptr<tValue, tAlloc> &x, tValue *y)
	{
		return x.get() == y;
	}
		
	template <typename tValue, typename tAlloc>
	bool operator==(tValue *x, const allocator_ptr<tValue, tAlloc> &y)
	{
		return x == y.get();
	}
		
	template <typename tValue, typename tAlloc>
	bool operator!=(const allocator_ptr<tValue, tAlloc> &x, const allocator_ptr<tValue, tAlloc> &y)
	{
		return x.get() != y.get();
	}

	template <typename tValue, typename tAlloc>
	bool operator!=(const allocator_ptr<tValue, tAlloc> &x, tValue *y)
	{
		return x.get() != y;
	}

	template <typename tValue, typename tAlloc>
	bool operator!=(tValue *x, const allocator_ptr<tValue, tAlloc> &y)
	{
		return x != y.get();
	}
}

#endif
