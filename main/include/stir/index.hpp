#ifndef _STIR_INDEX_HPP_
# define _STIR_INDEX_HPP_

#include "btree.hpp"

namespace stir
{

	template 
	<
		typename tValue, 
		typename tAllocator = ::std::allocator<tValue>
	>
	class index
	{
	private:
		typedef ::stir::index_impl::node_type<tValue> node_type;
		typedef ::stir::btree<node_type, 2, 3, tAllocator::rebind<node_type> > btree_type;

	public:
		typedef tValue value_type;
		typedef tAllocator allocator_type;

		typedef allocator_type::pointer pointer;
		typedef allocator_type::const_pointer const_pointer;
		typedef allocator_type::reference reference;
		typedef allocator_type::const_reference const_reference;

		typedef allocator_type::size_type size_type;
		typedef allocator_type::difference_type difference_type;

		typedef btree_type::iterator iterator;
		typedef btree_type::const_iterator const_iterator;
		typedef typename ::std::reverse_iterator<iterator> reverse_iterator;
		typedef typename ::std::reverse_iterator<const_iterator> reverse_const_iterator;

	};

}

#endif
