#ifndef _STIR_BINARY_TREE_HPP_
# define _STIR_BINARY_TREE_HPP_

#include <memory>

namespace stir
{
	namespace binary_tree_impl
	{
		// this defines a pointer that is controlled by an allocator
		// note that it has the same semantics as std::auto_ptr, except
		// that it uses the allocator for all operations rather than
		// new/delete and it may throw on the by-value constructor or
		// reset function.
		template <typename tNode>
		class node_ptr_ref
		{
		private:
			tNode *mPtr;

		public:
			node_ptr_ref();
			node_ptr_ref(const node_ptr<tNode> &ptr);
			// we can let the compiler do The Right Thing
			// with the copy constructor and assignment operator.

			tNode *get() const;
			node_ptr_ref<tNode> reset(const node_ptr<tNode> &ptr);
			void swap(node_ptr_ref<tNode> &ptr);

			tNode *operator->() const;
			tNode &operator*() const;
			bool operator!() const;
		};

		template <typename tNode>
		void swap(node_ptr_ref<tNode> &x, node_ptr_ref<tNode> &y);
		
		template <typename tNode>
		bool operator==(const node_ptr_ref<tNode> &x, const node_ptr_ref<tNode> &y)

		template <typename tNode>
		bool operator==(const node_ptr_ref<tNode> &x, tNode *y)

		template <typename tNode>
		bool operator==(tNode *x, const node_ptr_ref<tNode> &y)

		template <typename tNode>
		bool operator!=(const node_ptr_ref<tNode> &x, const node_ptr_ref<tNode> &y)

		template <typename tNode>
		bool operator!=(const node_ptr_ref<tNode> &x, tNode *y)

		template <typename tNode>
		bool operator!=(tNode *x, const node_ptr_ref<tNode> &y)

		template <typename tValue>
		class node
		{
		public:
			typedef tValue value_type;
			typedef node<tValue> node_type;
			typedef node_ptr<node_type> node_ptr_type;
			typedef node_ptr_ref<node_type> node_ptr_ref_type;

		private:
			node_ptr_ref_type mParent;

			node_ptr_type mLeft;
			node_ptr_type mRight;

			// prevent copy construction
			node(const node &);
			void operator=(const node &);

			node(const node_ptr_type &parent, const value_type &value); // may throw

		public:
			// this is safe as a public member because it's the client
			// code that controls it. This is just storage space.
			value_type value;

			// this creates a new root node.
			node(const value_type &value);

			bool is_root() const; // does not throw
		        node_type &parent(); // does not throw
			const node_type &parent() const; // does not throw

			bool valid_left() const; // does not throw
			node_type &left(); // does not throw
			const node_type &left() const; // does not throw

			node_type &insert_left(); // may throw if left is not empty or if copy constructor throws.

		        bool valid_right() const; // does not throw
		        node_type &right(); // does not throw
			const node_type &right() const; // does not throw

			node_type &insert_right(); // may throw
		};

		

	}

	template 
	<
		typename tValue, 
		typename tAllocator = ::std::allocator<tValue>
	>
	class binary_tree
	{
	private:
		typedef binary_tree<tValue, tAllocator> tree_type;
		typedef binary_tree_impl::node<tValue> node_type;

	public:
		typedef tValue value_type;
		typedef tAllocator allocator_type;

		typedef binary_tree_impl::iterator<tValue> iterator;
		typedef binary_tree_impl::const_iterator<tValue> const_iterator;
		typedef ::std::reverse_iterator<iterator> reverse_iterator;
		typedef ::std::reverse_iterator<const_iterator> reverse_const_iterator;

		typedef tAllocator::pointer pointer;
		typedef tAllocator::const_pointer const_pointer;
		typedef tAllocator::reference reference;
		typedef tAllocator::const_reference const_reference;

		typedef tAllocator::size_type size_type;
		typedef tAllocator::difference_type difference_type;

	private:		
		tAllocator mAlloc;

		::std::auto_ptr<node_type> mRoot;
		iterator mBegin;

	public:
		binary_tree(const tree_type &y); // may throw
		explicit binary_tree(const allocator_type &alloc = allocator_type()); // may throw
		
		void clear(); // does not throw
		iterator erase(const iterator &it); // does not throw
		iterator erase(const iterator &begin, const iterator &end); // does not throw

		iterator insert(const iterator &it, const value_type &val); // may throw

		// these functions rotate a subtree such that the node `spoke`
		// ends up where `hub` is now.
		// the iterators passed to these functions must be along a direct left or right path
		// of each other.
		void rotate_left(const iterator &spoke, const iterator &hub); // does not throw
		void rotate_right(const iterator &spoke, const iterator &hub); // does not throw

		inline bool empty() const // does not throw
		{
			return begin() == end();
		}
		size_type size() const; // does not throw

		inline allocator_type get_allocator() const // may throw
		{
			return mAlloc;
		}
		inline size_type max_size() const // may throw
		{
			return mAlloc.max_size();
		}

		inline void swap(tree_type &y) // may throw (but does not if swap<allocator> does not)
		{
			using ::std::swap;

			swap(mAlloc, y.mAlloc);
			swap(mEndGaurd, y.mEndGaurd);
			swap(mRoot, y.mRoot);
			swap(mBegin, y.mBegin);
			swap(mEnd, y.mEnd);
		}

		inline iterator begin() // does not throw
		{
			return mBegin;
		}
		inline const_iterator begin() const // does not throw
		{
			return mBegin;
		}
		inline iterator end() // does not throw
		{
			return iterator();
		}
		inline const_iterator end() const // does not throw
		{
			return const_iterator();
		}
	      
		inline reverse_iterator rbegin() // may throw (depends on reverse_iterator)
		{
			return reverse_iterator(iterator());
		}
		inline const_reverse_iterator rbegin() const // may throw (depends on reverse_iterator)
		{
			return const_reverse_iterator(const_iterator());
		}
		inline reverse_iterator rend() // may throw (depends on reverse_iterator)
		{
			return reverse_iterator(mBegin);
		}
		inline const_reverse_iterator rend() const // may throw (depends on reverse_iterator)
		{
			return const_reverse_iterator(mBegin);
		}
	};
}

#endif
