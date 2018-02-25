#include <iostream>

using namespace std;

#pragma once

template<class T>
class RBTNode
{
public:
	typedef bool RBTColor;		//trueΪ��ɫ��falseΪ��ɫ

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
	//���ӽڵ�
	RBTNode<T> *InsertNode(T iKey);
	//ɾ���ڵ�
	void DeleteNode(T iKey);
	//��ȡ���ڵ�
	RBTNode<T> *GetRootNode();
	//��ȡ���ֵ��Ӧ�ڵ�
	RBTNode<T> *GetMaxNode();
	//��ȡ��Сֵ��Ӧ�ڵ�
	RBTNode<T> *GetMinNode();
	//ǰ�����������˳�����keyֵ
	void preOrder();
	//�������������˳�����keyֵ
	void inOrder();
	//�������������˳�����keyֵ
	void postOrder();
	//����Keyֵ��Ӧ��node,����ҵ��˸ýڵ㣬���ظýڵ㣬boolֵ����Ϊtrue�����δ�ҵ��ýڵ㣬���ظü�ֵ��Ӧ�ĸ��ڵ㣬boolֵ����Ϊfalse
	pair<RBTNode<T> *, bool> SerachNode(T iKey);
	//���ٺ����
	void destroy();
private:
	//�������������
	void insertFixUp(RBTNode<T>* &root, RBTNode<T>* node);
	//ɾ�����������
	void removeFixUp(RBTNode<T>* &root, RBTNode<T> *node, RBTNode<T> *parent);

	//����Keyֵ��Ӧ��node,����ҵ��˸ýڵ㣬���ظýڵ㣬boolֵ����Ϊtrue�����δ�ҵ��ýڵ㣬���ظü�ֵ��Ӧ�ĸ��ڵ㣬boolֵ����Ϊfalse
	pair<RBTNode<T> *, bool> SerachNode(RBTNode<T>* &root, T iKey);

	// ����
	void leftRotate(RBTNode<T>* &root, RBTNode<T>* x);
	// ����
	void rightRotate(RBTNode<T>* &root, RBTNode<T>* y);

	//���ٺ����
	void destroy(RBTNode<T>* &tree);

	//ǰ�����������˳�����keyֵ
	void preOrder(RBTNode<T>* node);

	//�������������˳�����keyֵ
	void inOrder(RBTNode<T>* node);

	//�������������˳�����keyֵ
	void postOrder(RBTNode<T>* node);
private:
	RBTNode<T> *m_root;		//���ڵ�
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

//��������xλ���丸�ڵ�����ӽڵ�
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
		//�޸��游
		pparentNode->m_left == parentNode ? pparentNode->m_left = x : pparentNode->m_right = x;
		//�޸ĸ��ڵ�
		parentNode->m_left = x->m_right;
		parentNode->m_parent = x;
		//�޸�����
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

//��������xλ���丸�ڵ�����ӽڵ�
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
		//�޸��游
		pparentNode->m_left == parentNode ? pparentNode->m_left = x : pparentNode->m_right = x;
		//�޸ĸ��ڵ�
		parentNode->m_right = x->m_left;
		parentNode->m_parent = x;
		//�޸�����
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
	//���ӵ�Ϊ���ڵ㡢���ڵ�Ϊ��ɫ����ʱֱ������
	if (nullptr == root || nullptr == node || node == root || node->m_parent->m_color == true)
	{
		return;
	}
	//ֻҪ���ڵ���ڣ���Ϊ��ɫ������ѭ��
	RBTNode<T> *parentNode = nullptr;
	RBTNode<T> *pparentNode = nullptr;	//���ڵ���游�ڵ�
	while ((parentNode = node->m_parent) && (parentNode->m_color == false))
	{
		//���ڵ�Ϊ��ɫ��˵�����ڵ㲻����Ϊ���ڵ㣬���Ȼ�����游�ڵ�
		pparentNode = parentNode->m_parent;

		//�������������
		//	case1:�����룬�����ڵ�Ϊ��ɫ��һ�������������ø��ڵ�Ϊ��ɫ���游�ڵ�Ϊ��ɫ��
		//	case2:�ڲ���룬�����ڵ�Ϊ��ɫ��һ���������ټ�һ����������������Ϊ��ɫ���游�ڵ�Ϊ��ɫ��
		//	case3:�����ڵ�Ϊ��ɫ�����ڵ�Ͳ����ڵ�����Ϊ�ڣ��游�ڵ�����Ϊ�죻
		//���ڵ�Ϊ�游�ڵ������
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
		//���ڵ�Ϊ�游�ڵ���Һ���
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
	//m_rootΪ�գ��������root�ڵ�
	if (m_root == nullptr)
	{
		nodeTmp = new RBTNode<T>(iKey, true, nullptr, nullptr, nullptr);
		m_root = nodeTmp;
		return m_root;
	}
	//��ȡ��keyֵ��Ӧ�Ľڵ�
	pair<RBTNode<T> *, bool>pairTmp = SerachNode(iKey);
	
	if (pairTmp.second)
		return pairTmp.first;

	nodeTmp = new RBTNode<T>(iKey, false, nullptr, nullptr, pairTmp.first);
	
	//�������ڵ�
	pairTmp.first->m_key > iKey ? pairTmp.first->m_left = nodeTmp : pairTmp.first->m_right = nodeTmp;

	//���������
	insertFixUp(m_root, nodeTmp);

	return nodeTmp;
}
