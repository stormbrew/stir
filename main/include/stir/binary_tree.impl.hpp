#ifndef _STIR_BINARY_TREE_IMPL_HPP_
# define _STIR_BINARY_TREE_IMPL_HPP_

# include "binary_tree.hpp"

namespace stir
{

	namespace binary_tree_impl {

		template <typename tNode>
		node_ptr<tNode>::node_ptr()
			: mPtr(NULL)
		{}

		template <typename tNode>
		node_ptr<tNode>::node_ptr(tNode *ptr)
			: mPtr(ptr)
		{}

		template <typename tNode>
		node_ptr<tNode>::node_ptr(node_ptr<tNode> &ptr)
			: mPtr(ptr.mPtr)
		{
			ptr.mPtr = NULL;
		}

		template <typename tNode>
		node_ptr<tNode>::~node_ptr()
		{
			delete mPtr;
		}

		template <typename tNode>
		tNode *node_ptr<tNode>::get() const
		{
			return mPtr;
		}

		template <typename tNode>
		void node_ptr<tNode>::reset(tNode *ptr)
		{
			if (mPtr != ptr)
			{
				node_ptr<tNode> sink(*this);
				mPtr = ptr;
			}
		}

		template <typename tNode>
		tNode *node_ptr<tNode>::release()
		{
			tNode *tmp = NULL;
			::std::swap(mPtr, tmp);
			return tmp;
		}
		
		template <typename tNode>
		void node_ptr<tNode>::swap(node_ptr<tNode> &ptr)
		{
			::std::swap(mPtr, ptr.mPtr);
		}

		template <typename tNode>
		node_ptr<tNode> &node_ptr<tNode>::operator=(node_ptr<tNode> &y)
		{
			mPtr = y.mPtr;
			y.mPtr = NULL;
			return *this;
		}

		template <typename tNode>
		tNode *node_ptr<tNode>::operator->() const
		{
			return get();
		}

		template <typename tNode>
		tNode &node_ptr<tNode>::operator*() const
		{
			return *get();
		}

		template <typename tNode>
		bool node_ptr<tNode>::operator!() const
		{
			return get() != NULL;
		}

		template <typename tNode>
		void swap(node_ptr<tNode> &x, node_ptr<tNode> &y)
		{
			x.swap(y);
		}

		template <typename tNode>
		bool operator==(const node_ptr<tNode> &x, const node_ptr<tNode> &y)
		{
			return x.get() == y.get();
		}
		template <typename tNode>
		bool operator==(const node_ptr<tNode> &x, tNode *y)
		{
			return x.get() == y;
		}
		template <typename tNode>
		bool operator==(tNode *x, const node_ptr<tNode> &y)
		{
			return x == y.get();
		}

		template <typename tNode>
		bool operator!=(const node_ptr<tNode> &x, const node_ptr<tNode> &y)
		{
			return x.get() != y.get();
		}
		template <typename tNode>
		bool operator!=(const node_ptr<tNode> &x, tNode *y)
		{
			return x.get() != y;
		}
		template <typename tNode>
		bool operator!=(tNode *x, const node_ptr<tNode> &y)
		{
			return x != y.get();
		}

		template <typename tNode>
		node_ptr_ref<tNode>::node_ptr_ref()
			: mPtr(NULL)
		{}

		template <typename tNode>
		node_ptr_ref<tNode>::node_ptr_ref(const node_ptr<tNode> &ptr)
			: mPtr(ptr.mPtr)
		{}

		template <typename tNode>
		tNode *node_ptr_ref<tNode>::get() const
		{
			return mPtr;
		}

		template <typename tNode>
		node_ptr_ref<tNode> reset(const node_ptr<tNode> &ptr)
		{
			node_ptr_ref<tNode> tmp(ptr);
			swap(*this, tmp);
			return tmp;
		}

		template <typename tNode>
		void node_ptr_ref<tNode>::swap(node_ptr_ref<tNode> &ptr)
		{
			::std::swap(mPtr, ptr.mPtr);
		}

		template <typename tNode>
		tNode *node_ptr_ref<tNode>::operator->() const
		{
			return get();
		}

		template <typename tNode>
		tNode &node_ptr_ref<tNode>::operator*() const
		{
			return *get();
		}

		template <typename tNode>
		bool node_ptr_ref<tNode>::operator!() const
		{
			return get() != NULL;
		}

		template <typename tNode>
		void swap(node_ptr_ref<tNode> &x, node_ptr_ref<tNode> &y)
		{
			x.swap(y);
		}

		template <typename tNode>
		bool operator==(const node_ptr_ref<tNode> &x, const node_ptr_ref<tNode> &y)
		{
			return x.get() == y.get();
		}
		template <typename tNode>
		bool operator==(const node_ptr_ref<tNode> &x, tNode *y)
		{
			return x.get() == y;
		}
		template <typename tNode>
		bool operator==(tNode *x, const node_ptr_ref<tNode> &y)
		{
			return x == y.get();
		}

		template <typename tNode>
		bool operator!=(const node_ptr_ref<tNode> &x, const node_ptr_ref<tNode> &y)
		{
			return x.get() != y.get();
		}
		template <typename tNode>
		bool operator!=(const node_ptr_ref<tNode> &x, tNode *y)
		{
			return x.get() != y;
		}
		template <typename tNode>
		bool operator!=(tNode *x, const node_ptr_ref<tNode> &y)
		{
			return x != y.get();
		}

		template <typename tValue>
		node<tValue>::node(const node_ptr_type &parent, const value_type &value)
			: mParent(parent),
			  mValue(value)
		{}

		template <typename tValue>
		bool node<tValue>::is_root() const
		{
			return mParent == NULL;
		}

		template <typename tValue>
		node<tValue> &node<tValue>::parent()
		{
			return *mParent;
		}

		template <typename tValue>
		const node<tValue> &node<tValue>::parent() const
		{
			return *mParent;
		}

		template <typename tValue>
		bool node<tValue>::valid_left() const
		{
			return mLeft != NULL;
		}

		template <typename tValue>
		node<tValue> &node<tValue>::left()
		{
			return *mLeft;
		}

		template <typename tValue>
		const node<tValue> &node<tValue>::left() const
		{
			return *mLeft;
		}

		template <typename tValue>
		node<tValue> &node<tValue>::insert_left(const value_type &value)
		{
			node_ptr_type newNode(new node<tValue>(value));
		}

		template <typename tValue>
		bool node<tValue>::valid_right() const
		{
			return mRight != NULL;
		}

		template <typename tValue>
		node<tValue> &node<tValue>::right()
		{
			return *mRight;
		}

		template <typename tValue>
		const node<tValue> &node<tValue>::right() const
		{
			return *mRight;
		}
	}

}

#endif
