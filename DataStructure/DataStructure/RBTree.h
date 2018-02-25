#include <iostream>

using namespace std;

#pragma once

template<class T>
class RBTNode
{
public:
	typedef bool RBTColor;		//true为黑色，false为红色

public:
	RBTNode(T iKey, RBTColor iColor, RBTNode *ipLeft, RBTNode *ipRight, RBTNode *ipParent) :
		m_key(iKey), m_color(iColor), m_left(ipLeft), m_right(ipRight), m_parent(ipParent){};

public:
	RBTColor m_color;
	T m_key;
	RBTNode *m_left;
	RBTNode *m_right;
	RBTNode *m_parent;
};

template<class T>
class RBTree
{
public:
	RBTree();
	~RBTree();
	//增加节点
	RBTNode<T> *InsertNode(T iKey);
	//删除节点
	void DeleteNode(T iKey);
	//获取根节点
	RBTNode<T> *GetRootNode();
	//获取最大值对应节点
	RBTNode<T> *GetMaxNode();
	//获取最小值对应节点
	RBTNode<T> *GetMinNode();
	//前序遍历，并按顺序输出key值
	void preOrder();
	//中序遍历，并按顺序输出key值
	void inOrder();
	//后序遍历，并按顺序输出key值
	void postOrder();
	//查找Key值对应的node,如果找到了该节点，返回该节点，bool值设置为true；如果未找到该节点，返回该键值对应的父节点，bool值设置为false
	pair<RBTNode<T> *, bool> SerachNode(T iKey);
	//销毁红黑树
	void destroy();
private:
	//插入修正红黑树
	void insertFixUp(RBTNode<T>* &root, RBTNode<T>* node);
	//删除修正红黑树
	void removeFixUp(RBTNode<T>* &root, RBTNode<T> *node, RBTNode<T> *parent);

	//查找Key值对应的node,如果找到了该节点，返回该节点，bool值设置为true；如果未找到该节点，返回该键值对应的父节点，bool值设置为false
	pair<RBTNode<T> *, bool> SerachNode(RBTNode<T>* &root, T iKey);

	// 左旋
	void leftRotate(RBTNode<T>* &root, RBTNode<T>* x);
	// 右旋
	void rightRotate(RBTNode<T>* &root, RBTNode<T>* y);

	//销毁红黑树
	void destroy(RBTNode<T>* &tree);

	//前序遍历，并按顺序输出key值
	void preOrder(RBTNode<T>* node);

	//中序遍历，并按顺序输出key值
	void inOrder(RBTNode<T>* node);

	//后序遍历，并按顺序输出key值
	void postOrder(RBTNode<T>* node);
private:
	RBTNode<T> *m_root;		//根节点
};

template<class T>
void RBTree<T>::destroy()
{

}

template<class T>
pair<RBTNode<T> *, bool> RBTree<T>::SerachNode(RBTNode<T>* &root, T iKey)
{
	RBTNode<T> *targetNode = root;
	if (nullptr == m_root)
	{
		return make_pair(targetNode, false);
	}

	RBTNode<T> *childNode = nullptr;
	while (true)
	{
		if (targetNode->m_key == iKey)
		{
			return make_pair(targetNode, true);
		}
		targetNode->m_key > iKey ? childNode = targetNode->m_left : childNode = targetNode->m_right;
		if (nullptr == childNode)
		{
			return make_pair(targetNode, false);
		}
		else
		{
			targetNode = childNode;
		}
	}
}

template<class T>
RBTree<T>::~RBTree()
{
	destroy();
}

template<class T>
RBTree<T>::RBTree():
m_root(nullptr)
{
}

template<class T>
void RBTree<T>::postOrder(RBTNode<T>* node)
{
	if (nullptr == node)
	{
		return;
	}
	postOrder(node->m_left);
	postOrder(node->m_right);
	cout << node->m_key << '\t';
}

template<class T>
void RBTree<T>::inOrder(RBTNode<T>* node)
{
	if (nullptr == node)
	{
		return;
	}
	inOrder(node->m_left);
	cout << node->m_key << '\t';
	inOrder(node->m_right);
}

template<class T>
void RBTree<T>::preOrder(RBTNode<T>* node)
{
	if (nullptr == node)
	{
		return;
	}
	cout << node->m_key << '\t';
	preOrder(node->m_left);
	preOrder(node->m_right);
}

template<class T>
void RBTree<T>::postOrder()
{
	postOrder(m_root);
}

template<class T>
void RBTree<T>::inOrder()
{
	inOrder(m_root);
}

template<class T>
void RBTree<T>::preOrder()
{
	preOrder(m_root);
}

//右旋，则x位于其父节点的左子节点
template<class T>
void RBTree<T>::rightRotate(RBTNode<T>* &root, RBTNode<T>* x)
{
	if (root == nullptr || x == nullptr || x->m_parent == nullptr)
	{
		return;
	}
	RBTNode<T> *parentNode = x->m_parent;
	if (root != parentNode)
	{
		RBTNode<T> *pparentNode = parentNode->m_parent;
		//修改祖父
		pparentNode->m_left == parentNode ? pparentNode->m_left = x : pparentNode->m_right = x;
		//修改父节点
		parentNode->m_left = x->m_right;
		parentNode->m_parent = x;
		//修改自身
		x->m_right = parentNode;
		x->m_parent = pparentNode;
	}
	else
	{
		root = x;
		parentNode->m_left = x->m_right;
		parentNode->m_parent = x;
		x->m_right = parentNode;
		x->m_parent = nullptr;
	}
}

//左旋，则x位于其父节点的右子节点
template<class T>
void RBTree<T>::leftRotate(RBTNode<T>* &root, RBTNode<T>* x)
{
	if (root == nullptr || x == nullptr || x->m_parent == nullptr)
	{
		return;
	}
	RBTNode<T> *parentNode = x->m_parent;
	if (root != parentNode)
	{
		RBTNode<T> *pparentNode = parentNode->m_parent;
		//修改祖父
		pparentNode->m_left == parentNode ? pparentNode->m_left = x : pparentNode->m_right = x;
		//修改父节点
		parentNode->m_right = x->m_left;
		parentNode->m_parent = x;
		//修改自身
		x->m_left = parentNode;
		x->m_parent = pparentNode;
	}
	else
	{
		root = x;
		parentNode->m_right = x->m_left;
		parentNode->m_parent = x;
		x->m_left = parentNode;
		x->m_parent = nullptr;
	}
}

template<class T>
void RBTree<T>::insertFixUp(RBTNode<T>* &root, RBTNode<T>* node)
{
	//增加的为根节点、父节点为黑色，此时直接跳过
	if (nullptr == root || nullptr == node || node == root || node->m_parent->m_color == true)
	{
		return;
	}
	//只要父节点存在，且为红色，继续循环
	RBTNode<T> *parentNode = nullptr;
	RBTNode<T> *pparentNode = nullptr;	//父节点和祖父节点
	while ((parentNode = node->m_parent) && (parentNode->m_color == false))
	{
		//父节点为红色，说明父节点不可能为根节点，则必然存在祖父节点
		pparentNode = parentNode->m_parent;

		//调整分三种情况
		//	case1:外侧插入，伯父节点为黑色，一次右旋，并设置父节点为黑色，祖父节点为红色；
		//	case2:内侧插入，伯父节点为黑色，一次左旋，再加一次右旋，设置自身为黑色，祖父节点为红色；
		//	case3:伯父节点为红色，父节点和伯父节点设置为黑，祖父节点设置为红；
		//父节点为祖父节点的左孩子
		if (parentNode == pparentNode->m_left)
		{
			RBTNode<T> *auntNode = pparentNode->m_right;
			if (auntNode == nullptr || auntNode->m_color == true)
			{
				//case1
				if (node == parentNode->m_left)
				{
					pparentNode->m_color = false;
					parentNode->m_color = true;
					rightRotate(root, parentNode);
				}
				//case2
				else
				{
					node->m_color = true;
					pparentNode->m_color = false;
					leftRotate(root, node);
					rightRotate(root, node);
				}
			}
			//case 3
			else
			{
				parentNode->m_color = true;
				auntNode->m_color = true;
				pparentNode->m_color =(pparentNode == root ? true : false);
				insertFixUp(root, pparentNode);
			}
		}
		//父节点为祖父节点的右孩子
		else
		{
			RBTNode<T> *auntNode = pparentNode->m_left;
			if (auntNode == nullptr || auntNode->m_color == true)
			{
				//case1
				if (node == parentNode->m_right)
				{
					pparentNode->m_color = false;
					parentNode->m_color = true;
					leftRotate(root, parentNode);
				}
				//case2
				else
				{
					node->m_color = true;
					pparentNode->m_color = false;
					rightRotate(root, node);
					leftRotate(root, node);
				}
			}
			//case 3
			else
			{
				parentNode->m_color = true;
				auntNode->m_color = true;
				pparentNode->m_color = (pparentNode == root ? true : false);
				insertFixUp(root, pparentNode);
			}
		}
	}
}

template<class T>
pair<RBTNode<T> *, bool> RBTree<T>::SerachNode(T iKey)
{
	return SerachNode(m_root, iKey);
}

template<class T>
RBTNode<T>* RBTree<T>::InsertNode(T iKey)
{
	RBTNode<T> *nodeTmp = nullptr;
	//m_root为空，插入的是root节点
	if (m_root == nullptr)
	{
		nodeTmp = new RBTNode<T>(iKey, true, nullptr, nullptr, nullptr);
		m_root = nodeTmp;
		return m_root;
	}
	//获取该key值对应的节点
	pair<RBTNode<T> *, bool>pairTmp = SerachNode(iKey);
	
	if (pairTmp.second)
		return pairTmp.first;

	nodeTmp = new RBTNode<T>(iKey, false, nullptr, nullptr, pairTmp.first);
	
	//调整父节点
	pairTmp.first->m_key > iKey ? pairTmp.first->m_left = nodeTmp : pairTmp.first->m_right = nodeTmp;

	//修正红黑树
	insertFixUp(m_root, nodeTmp);

	return nodeTmp;
}
