#ifndef _STIR_ALLOCATOR_PTR_HPP_
# define _STIR_ALLOCATOR_PTR_HPP_

#include <memory>

namespace stir
{
	// this class has similar semantics to auto_ptr, except in that it
	// manages a single value block of memory allocated by a standard 
	// conformant allocator in an exception safe way.
	template <typename tValue, typename tAlloc = ::std::allocator<tValue> >
	class allocator_ptr
	{
	private:
		tAlloc mAlloc;
		tValue *mPtr;
		
	public:
		allocator_ptr(const tAlloc &alloc = tAlloc());
		explicit allocator_ptr(const tValue &value, const tAlloc &alloc = tAlloc(), tValue *hint = NULL); // may throw
		explicit allocator_ptr(allocator_ptr<tValue, tAlloc> &ptr); // leaves ptr empty.
		~allocator_ptr();
		
		void reset(const tValue &value); // may throw
		void swap(allocator_ptr<tValue, tAlloc> &ptr);
		
		tValue *get() const;
		tValue *release();
		
		allocator_ptr<tValue, tAlloc> &operator=(allocator_ptr<tValue, tAlloc> &y); // leaves ptr empty.
		tValue *operator->() const;
		tValue &operator*() const;
		bool operator!() const;
	};
	
	template <typename tValue, typename tAlloc>
	void swap(allocator_ptr<tValue, tAlloc> &x, allocator_ptr<tValue, tAlloc> &y);
	
	template <typename tValue, typename tAlloc>
	bool operator==(const allocator_ptr<tValue, tAlloc> &x, const allocator_ptr<tValue, tAlloc> &y);
		
	template <typename tValue, typename tAlloc>
	bool operator==(const allocator_ptr<tValue, tAlloc> &x, tValue *y);
		
	template <typename tValue, typename tAlloc>
	bool operator==(tValue *x, const allocator_ptr<tValue, tAlloc> &y);
		
	template <typename tValue, typename tAlloc>
	bool operator!=(const allocator_ptr<tValue, tAlloc> &x, const allocator_ptr<tValue, tAlloc> &y);

	template <typename tValue, typename tAlloc>
	bool operator!=(const allocator_ptr<tValue, tAlloc> &x, tValue *y);

	template <typename tValue, typename tAlloc>
	bool operator!=(tValue *x, const allocator_ptr<tValue, tAlloc> &y);
}

#include "allocator_ptr.impl.hpp"

#endif
