// NowCoder.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <ios>
#include <sstream>
#include <iomanip>
#include <tchar.h>
#include <string>
#include <iosfwd>
#include <deque>
#include <queue>
#include <stack>
#include <unordered_set>
#include <set>
#include <unordered_map>

#include <iostream>

using namespace std;


/******************************************************************************
�������ƣ� run	Leetcode-1
����˵���� Given a binary tree, find its minimum depth.The minimum depth is the number of nodes along the shortest
path from the root node down to the nearest leaf node.
�� �� ֵ�� int
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//struct TreeNode 
//{
//	int val;m
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//
//	int run(TreeNode *root)
//	{
//		if (root == nullptr)
//			return 0;
//
//		if (root->left == nullptr && root->right == nullptr)
//			return 1;
//		else if (root->left == nullptr && root->right != nullptr)
//			return 1 + run(root->right);
//		else if (root->left != nullptr && root->right == nullptr)
//			return 1 + run(root->left);
//		else
//			return 1 + min(run(root->left), run(root->right));
//	}
//};

/******************************************************************************
�������ƣ� evalRPN	Leetcode-2
����˵���� Evaluate the value of an arithmetic expression in Reverse Polish Notation.
Valid operators are+,-,*,/. Each operand may be an integer or another expression.
Some examples:
["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
�� �� ֵ�� int
��    ���� vector<string> & tokens
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	int evalRPN(vector<string> &tokens)
//	{
//		int result = 0;
//		stack<char>sSymbol;
//		stack<int>sNum;
//		for (auto singleStr : tokens)
//		{
//			if (singleStr == "+")
//			{
//				if (sNum.size() < 2)
//					return 0;
//				int num1 = sNum.top();
//				sNum.pop();
//				int num2 = sNum.top();
//				sNum.pop();
//				result = num2 + num1;
//				sNum.push(result);
//			}
//			else if (singleStr == "-")
//			{
//				if (sNum.size() < 2)
//					return 0;
//				int num1 = sNum.top();
//				sNum.pop();
//				int num2 = sNum.top();
//				sNum.pop();
//				result = num2 - num1;
//				sNum.push(result);
//			}
//			else if (singleStr == "*")
//			{
//				if (sNum.size() < 2)
//					return 0;
//				int num1 = sNum.top();
//				sNum.pop();
//				int num2 = sNum.top();
//				sNum.pop();
//				result = num2 * num1;
//				sNum.push(result);
//			}
//			else if (singleStr == "/")
//			{
//				if (sNum.size() < 2)
//					return 0;
//				int num1 = sNum.top();
//				sNum.pop();
//				int num2 = sNum.top();
//				sNum.pop();
//				result = num2 / num1;
//				sNum.push(result);
//			}
//			else
//			{
//				sNum.push(atoi(singleStr.c_str()));
//			}
//		}
//		if (!sNum.empty())
//			return sNum.top();
//		else
//			return 0;
//	}
//};

/******************************************************************************
�������ƣ� maxPoints	Leetcode-3
����˵���� Given n points on a 2D plane, find the maximum number of points that lie on the same straight line.
�� �� ֵ�� int
��    ���� vector<Point> & points
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//struct Point {
//	int x;
//	int y;
//	Point() : x(0), y(0) {}
//	Point(int a, int b) : x(a), y(b) {}
//};
//
//class Solution {
//public:
//
//	int maxPoints(vector<Point> &points)
//	{
//		if (points.empty())
//			return 0;
//
//		long long ans = 0;
//		for (int i = 0; i < points.size(); i++)
//		{
//			map<double, long long> k;
//			long long multi = 0, vertical = 0, maxk = 0;
//			for (int j = i + 1; j < points.size(); j++)
//			{
//				double val = 0;
//				if (points[i].x == points[j].x && points[i].y == points[j].y)
//					multi++;
//				else if (points[i].x == points[j].x)
//					maxk = max(maxk, ++vertical);
//				else
//				{
//					int xTmp = points[j].x - points[i].x;
//					int yTmp = points[j].y - points[i].y;
//
//					//����double����
//					ostringstream os;
//					os << std::fixed << std::setprecision(5) << (double)yTmp / xTmp << endl;
//					double val = stod(os.str());
//					maxk = max(maxk, ++k[val]);
//				}
//			}
//			ans = max(ans, maxk + multi + 1);
//		}
//		return ans;
//	}
//
//	//�����Լ��
//	int gcd(int a, int b)
//	{
//		return b == 0 ? a : gcd(b, a % b);
//	}
//};

/******************************************************************************
�������ƣ� sortList	Leetcode-4
����˵���� Sort a linked list in O(n log n) time using constant space complexity.
�� �� ֵ�� ListNode *
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//struct ListNode
//{
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//
//	ListNode *sortList(ListNode *head)
//	{
//		ListNode *root(nullptr);
//		if (head == nullptr)
//			return root;
//
//		int index = 0;
//		ListNode *nodeTmp(head);
//		while (nodeTmp != nullptr)
//		{
//			++index;
//			nodeTmp = nodeTmp->next;
//		}
//
//		return sortList_help(head, index);
//	}
//
//	ListNode *sortList_help(ListNode *&head, int index)
//	{
//		ListNode *root(nullptr), *rroot(nullptr);
//		if (head == nullptr || index == 0)
//			return nullptr;
//
//		if (index == 1)
//		{
//			root = head;
//			head = head->next;
//			root->next = nullptr;
//			return root;
//		}
//
//		int halfIndex1 = index >> 1;
//		int halfIndex2 = index - halfIndex1;
//		ListNode *root1 = sortList_help(head, halfIndex1);
//		ListNode *root2 = sortList_help(head, halfIndex2);
//
//		return Merge(root1, halfIndex1, root2, halfIndex2);
//	}
//
//	ListNode *Merge(ListNode *root1, int halfIndex1, ListNode *root2, int halfIndex2)
//	{
//		ListNode *root(nullptr), *rroot(nullptr);
//		while (halfIndex1 > 0 && halfIndex2 > 0)
//		{
//			if (root1->val < root2->val)
//			{
//				if (rroot == nullptr)
//					root = root1;
//				else
//					rroot->next = root1;
//				rroot = root1;
//				--halfIndex1;
//				root1 = root1->next;
//			}
//			else
//			{
//				if (root == nullptr)
//					root = root2;
//				else
//					rroot->next = root2;
//				rroot = root2;
//				--halfIndex2;
//				root2 = root2->next;
//			}
//		}
//		if (halfIndex1 != 0)
//			rroot->next = root1;
//		else
//			rroot->next = root2;
//
//		return root;
//	}
//};

/******************************************************************************
�������ƣ� insertionSortList	Leetcode-5
����˵���� Sort a linked list using insertion sort.
�� �� ֵ�� ListNode *
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct ListNode
//{
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//
//class Solution {
//public:
//	ListNode *insertionSortList(ListNode *head) 
//	{
//		ListNode *root(head), *tar(root);
//		if (head == nullptr || head->next == nullptr)
//			return root;
//		
//		ListNode *flagNode = head->next;	//��ǰ�����node
//		head = flagNode->next;
//		flagNode->next = nullptr;
//		root->next = nullptr;
//		
//		ListNode *nodeTmp = nullptr;	//�α�λ�ã����ڶ�λnode�����λ��
//		ListNode *nodeTmp_next = root;
//
//		while (flagNode != nullptr)
//		{
//			if (tar->val < flagNode->val)
//			{
//				tar->next = flagNode;
//				tar = flagNode;
//			}
//			else
//			{
//				if (nodeTmp_next == nullptr || nodeTmp_next->val > flagNode->val)
//				{
//					nodeTmp = nullptr;
//					nodeTmp_next = root;
//				}
//				//����flagNodeӦ�ò����λ�ã�
//				while (nodeTmp_next != nullptr && nodeTmp_next->val < flagNode->val)
//				{
//					nodeTmp = nodeTmp_next;
//					nodeTmp_next = nodeTmp_next->next;
//				}
//
//				//����node
//				if (nodeTmp == nullptr)
//				{
//					root = flagNode;
//					nodeTmp = flagNode;
//				}
//				else
//					nodeTmp->next = flagNode;
//				flagNode->next = nodeTmp_next;
//			}
//
//			//�����α�
//			nodeTmp = flagNode;
//			nodeTmp_next = nodeTmp->next;
//
//			if (head == nullptr)
//				return root;
//			flagNode = head;
//			head = head->next;
//			flagNode->next = nullptr;
//		}
//		return root;
//	}
//
//};

/******************************************************************************
�������ƣ� postorderTraversal	Leetcode-6
����˵���� Given a binary tree, return the postorder traversal of its nodes' values.(�������)
�� �� ֵ�� vector<int>
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	//vector<int> postorderTraversal(TreeNode *root)
//	//{
//	//	//�ݹ鷽��
//	//	/*vector<int>result;
//	//	if (root == nullptr)
//	//	return result;
//
//	//	postorderTraversal_help(root, result);
//	//	return result;*/
//
//	//	//ѭ������
//	//	/*vector<int>result;
//	//	if (root == nullptr)
//	//	return result;
//
//	//	stack<TreeNode *>sNodes;
//	//	sNodes.push(root);
//
//	//	while (true)
//	//	{
//	//	while (root->left != nullptr)
//	//	{
//	//	root = root->left;
//	//	sNodes.push(root);
//	//	}
//
//	//	if (root->right != nullptr)
//	//	{
//	//	root = root->right;
//	//	sNodes.push(root);
//	//	}
//	//	else
//	//	{
//	//	do
//	//	{
//	//	sNodes.pop();
//	//	result.push_back(root->val);
//	//	if (sNodes.empty())
//	//	return result;
//
//	//	if (sNodes.top()->left == root && sNodes.top()->right != nullptr)
//	//	break;
//	//	else
//	//	root = sNodes.top();
//	//	} while (true);
//
//	//	root = sNodes.top()->right;
//	//	sNodes.push(root);
//	//	}
//	//	}
//	//	return result;*/
//	//}
//
//	//void postorderTraversal_help(TreeNode *root, vector<int>&result)
//	//{
//	//	if (root == nullptr)
//	//		return;
//
//	//	postorderTraversal_help(root->left, result);
//	//	postorderTraversal_help(root->right, result);
//	//	result.push_back(root->val);
//	//}
//
//	void postorderTraversal_help(TreeNode *root, vector<int>&result)
//	{
//		if (root == nullptr)
//			return;
//
//		postorderTraversal_help(root->left, result);
//		postorderTraversal_help(root->right, result);
//		result.push_back(root->val);
//	}
//
//	vector<int> midorderTraversal(TreeNode *root)		//�������
//	{
//		//�ݹ鷽��
//		vector<int>result;
//		if (root == nullptr)
//			return result;
//
//		midorderTraversal_help(root, result);
//		return result;
//
//		//ѭ������
//		vector<int>result;
//		if (root == nullptr)
//			return result;
//
//		stack<TreeNode *>sNodes;
//		sNodes.push(root);
//
//		while (true)
//		{
//			while (root->left != nullptr)
//			{
//				root = root->left;
//				sNodes.push(root);
//			}
//
//			if (root->right != nullptr)
//			{
//				root = root->right;
//				result.push_back(root->val);
//				sNodes.push(root);
//			}
//			else
//			{
//				sNodes.pop();
//				result.push_back(root->val);
//				if (sNodes.empty())
//					return result;
//
//				while (true)
//				{
//					if (sNodes.top()->left == root)//rootΪ���ڵ�����ӽڵ�
//					{
//						if (sNodes.top()->right != nullptr)
//						{
//							root = sNodes.top()->right;
//							result.push_back(sNodes.top()->val);
//							sNodes.push(root);
//							break;
//						}
//						else
//						{
//							root = sNodes.top();
//							result.push_back(root->val);
//							sNodes.pop();
//							if (sNodes.empty())
//								return result;
//						}
//					}
//					else//rootΪ���ڵ�����ӽڵ�
//					{
//						root = sNodes.top();
//						sNodes.pop();
//						if (sNodes.empty())
//							return result;
//					}
//
//				}
//			}
//		}
//		return result;
//	}
//
//	void midorderTraversal_help(TreeNode *root, vector<int>&result)
//	{
//		if (root == nullptr)
//			return;
//
//		midorderTraversal_help(root->left, result);
//		result.push_back(root->val);
//		midorderTraversal_help(root->right, result);	
//	}
//};

/******************************************************************************
�������ƣ� preorderTraversal	Leetcode-7
����˵���� Given a binary tree, return the preorder traversal of its nodes' values.(ǰ�����)
�� �� ֵ�� vector<int>
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode *root)
//	{
//		//�ݹ鷽��
//		/*vector<int>result;
//		if (root == nullptr)
//		return result;
//
//		preorderTraversal_help(root, result);
//		return result;*/
//
//		//ѭ������
//		vector<int>result;
//		if (root == nullptr)
//			return result;
//
//		stack<TreeNode *>sNodes;
//		result.push_back(root->val);
//		sNodes.push(root);
//
//		while (true)
//		{
//			while (root->left != nullptr)
//			{
//				root = root->left;
//				result.push_back(root->val);
//				sNodes.push(root);
//			}
//
//			if (root->right != nullptr)
//			{
//				root = root->right;
//				result.push_back(root->val);
//				sNodes.push(root);
//			}
//			else
//			{
//				do
//				{
//					sNodes.pop();
//					if (sNodes.empty())
//						return result;
//
//					if (sNodes.top()->left == root && sNodes.top()->right != nullptr)
//						break;
//					else
//					{
//						root = sNodes.top();
//					}
//				} while (true);
//				root = sNodes.top()->right;
//				result.push_back(root->val);
//				sNodes.push(root);
//			}
//		}
//		return result;
//	}
//
//	/*void preorderTraversal_help(TreeNode *root, vector<int>&result)
//	{
//	if (root == nullptr)
//	return;
//	result.push_back(root->val);
//	preorderTraversal_help(root->left, result);
//	preorderTraversal_help(root->right, result);
//	}*/
//};

/******************************************************************************
�������ƣ� reorderList		Leetcode-8
����˵���� Given a singly linked list L: L 0��L 1������L n-1��L n,
reorder it to: L 0��L n ��L 1��L n-1��L 2��L n-2����
You must do this in-place without altering the nodes' values.
For example,
Given{1,2,3,4}, reorder it to{1,4,2,3}.
�� �� ֵ�� void
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	void reorderList(ListNode *head)
//	{
//		//����ջ
//		/*if (head == nullptr || head->next == nullptr)
//			return;
//			stack<ListNode *>sNodes;
//			ListNode *node1(head), *node2(head);
//
//			while (node2 != nullptr && node2->next != nullptr)
//			{
//			node1 = node1->next;
//			node2 = node2->next;
//			if (node2 == nullptr)break;
//			node2 = node2->next;
//			}
//
//			node2 = node1->next;
//			node1->next = nullptr;
//			node1 = head;
//
//			while (node2 != nullptr)
//			{
//			sNodes.push(node2);
//			node2 = node2->next;
//			}
//
//			while (node1 != nullptr && !sNodes.empty())
//			{
//			ListNode *nodeTmp = node1->next;
//			node1->next = sNodes.top();
//			sNodes.top()->next = nodeTmp;
//			sNodes.pop();
//			node1 = nodeTmp;
//			}*/
//
//		//��ת����
//		/*if (head == nullptr || head->next == nullptr)
//			return;
//		ListNode *node1(head), *node2(head);
//
//		while (node2 != nullptr && node2->next != nullptr)
//		{
//			node1 = node1->next;
//			node2 = node2->next;
//			if (node2 == nullptr)break;
//			node2 = node2->next;
//		}
//
//		node2 = node1->next;
//		node1->next = nullptr;
//		node1 = head;
//
//		ListNode *node3 = ReverseList(node2);
//
//		while (node1 != nullptr && node3 != nullptr)
//		{
//			ListNode *nodeTmp1 = node1->next;
//			ListNode *nodeTmp2 = node3->next;
//			node1->next = node3;
//			node3->next = nodeTmp1;
//			node1 = nodeTmp1;
//			node3 = nodeTmp2;
//		}*/
//	}
//
//	ListNode *ReverseList(ListNode *root)
//	{
//		ListNode *newRoot(root);
//		if (root == nullptr || root->next == nullptr)
//			return newRoot;
//	
//		ListNode *nNode = root->next;
//		newRoot->next = nullptr;
//		while (nNode != nullptr)
//		{
//			root = nNode->next;
//
//			nNode->next = newRoot;
//			newRoot = nNode;
//
//			nNode = root;
//		}
//		return newRoot;
//	}
//};

/******************************************************************************
�������ƣ� detectCycle		Leetcode-9
����˵����Given a linked list, return the node where the cycle begins. If there is no cycle, returnnull.
Follow up:
Can you solve it without using extra space?
�� �� ֵ�� ListNode *
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//
//class Solution
//{
//public:
//	ListNode *detectCycle(ListNode *head)
//	{
//		if (head == NULL)
//			return nullptr;
//		ListNode* slow = head;
//		ListNode* fast = head;
//		while (fast != NULL && fast->next != NULL){
//			slow = slow->next;
//			fast = fast->next->next;
//			if (slow == fast)
//				break;
//		}
//		if (fast == NULL || fast->next == NULL){
//			return NULL;
//		}
//		slow = head;
//		while (slow != fast)
//		{
//			slow = slow->next;
//			fast = fast->next;
//		}
//		return slow;
//	}
//};

/******************************************************************************
�������ƣ� hasCycle			Leetcode-10
����˵���� Given a linked list, determine if it has a cycle in it.
Follow up:
Can you solve it without using extra space?
�� �� ֵ�� bool
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//
//class Solution {
//public:
//	bool hasCycle(ListNode *head)
//	{
//		if (head == nullptr)
//			return false;
//		ListNode *fast(head), *slow(head);
//
//		while (fast != nullptr && fast->next != nullptr)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (fast == slow)
//				return true;
//		}
//		return false;
//	}
//};

/******************************************************************************
�������ƣ� wordBreak			Leetcode-11
����˵���� Given a string s and a dictionary of words dict, add spaces in s to construct a sentence where each word is a valid dictionary word.
Return all such possible sentences.
For example, given
s ="catsanddog",
dict =["cat", "cats", "and", "sand", "dog"].
A solution is["cats and dog", "cat sand dog"].
�� �� ֵ�� vector<string>
��    ���� string s
��    ���� unordered_set<string> & dict
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/03
******************************************************************************/
//class Solution {
//public:
//	typedef pair<int, int>IndexPair;
//	vector<string> wordBreak(string s, unordered_set<string> &dict) 
//	{
//		//�ݹ���ҷ�
//		//vector<string>vSents;
//		//if (s.empty())
//		//	return vSents;
//
//		//if (dict.find(s) != dict.end())
//		//	vSents.push_back(s);
//
//		//for (size_t i = 1; i < s.size(); ++i)
//		//{
//		//	string strR = s.substr(i);
//		//	if (dict.find(strR) != dict.end())
//		//	{
//		//		string strL = s.substr(0, i);
//		//		vector<string>vStr = wordBreak(strL, dict);
//		//		for (auto &singleStr : vStr)
//		//			singleStr += (' ' + strR);
//		//		vSents.insert(vSents.begin(), vStr.begin(), vStr.end());
//		//		//copy(vStr.begin(), vStr.end(), back_inserter(vSents));//��copyֻ�ܽ�ÿ����Ա���μӵ�vSents��ĩβ��insert���Խ���Ա�ӵ�vSents�Ŀ�ͷ
//		//	}
//		//		
//		//}
//		//return vSents;
//
//		//��̬�滮��
//		//��string str = catsanddogΪ��������һ��10*10����buf[10][10]�����е�[i][j]λ�ñ�ʾ��str[i]-str[j]��ɵ��ַ����Ƿ���ɵ��ʣ����ԣ�
//		//buf[0][2], buf[0][3],buf[3][6],buf[4][6],buf[7][9]Ϊtrue������Ϊfalse
//		//����������Ч�ַ���ͬ�ݹ���ҷ�
//	}
//
//};

/******************************************************************************
�������ƣ� wordBreak			Leetcode-12
����˵���� Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of
one or more dictionary words.
For example, given
s ="leetcode",
dict =["leet", "code"].
Return true because"leetcode"can be segmented as"leet code".
�� �� ֵ�� bool
��    ���� string s
��    ���� unordered_set<string> & dict
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/04
******************************************************************************/
//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict)
//	{
//		if (s.empty() || dict.empty())
//			return false;
//
//		if (dict.find(s) != dict.end())
//			return true;
//
//		vector<bool>vVals(s.size() + 1, false);
//		vVals[0] = true;
//
//		for (size_t i = 1; i < vVals.size(); i++)
//		{
//			for (size_t j = 0; j < i; j++)
//			{
//				if (vVals[j] && dict.find(s.substr(j, i - j)) != dict.end())
//				{
//					vVals[i] = true;
//					break;
//				}
//			}
//		}
//
//		return vVals.back();
//	}
//};

/******************************************************************************
�������ƣ� copyRandomList			Leetcode-13
����˵���� A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.
Return a deep copy of the list.
�� �� ֵ�� RandomListNode *
��    ���� RandomListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/04
******************************************************************************/
//struct RandomListNode
//{
//	int label;
//	RandomListNode *next, *random;
//	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
//
//class Solution {
//public:
//	RandomListNode *copyRandomList(RandomListNode *head) 
//	{
//		if (head == nullptr)
//			return nullptr;
//		//��˳��������ڵ�
//		RandomListNode *nodeFlag = head;
//		while (nodeFlag != nullptr)
//		{
//			RandomListNode *nodeCopy = new RandomListNode(nodeFlag->label);
//			RandomListNode *nextNode = nodeFlag->next;
//			nodeFlag->next = nodeCopy;
//			nodeCopy->next = nextNode;
//			nodeFlag = nextNode;
//		}
//
//		//�����¿����ڵ��randomָ��
//		nodeFlag = head;
//		while (nodeFlag != nullptr && nodeFlag->next != nullptr)
//		{
//			RandomListNode *rNode = nodeFlag->random;
//			if (rNode != nullptr)
//				nodeFlag->next->random = rNode->next;
//
//			nodeFlag = nodeFlag->next->next;
//		}
//
//		//�������
//		nodeFlag = head;
//		RandomListNode *newRoot(head->next);
//		RandomListNode *newNode(newRoot);
//		while (nodeFlag != nullptr && nodeFlag->next != nullptr)
//		{
//			RandomListNode *nNode(nullptr), *nnNode(nullptr);
//			nNode = newNode->next;
//			if (nNode != nullptr)
//				nnNode = nNode->next;
//			
//			nodeFlag->next = nNode;
//			newNode->next = nnNode;
//
//			nodeFlag = nNode;
//			newNode = nnNode;
//		}
//		return newRoot;
//	}
//};

/******************************************************************************
�������ƣ� singleNumber			Leetcode-14
����˵����
Given an array of integers, every element appears three times except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
�� �� ֵ�� int
��    ���� int A[]
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/04
******************************************************************************/
//class Solution {
//public:
//	int singleNumber(int A[], int n)
//	{
//		//����1��ͳ��ÿλ1���ֵĴ���
//		/*if (A == nullptr || (n - 1) % 3 != 0)
//			return -1;
//
//			int intSize = sizeof(n) * 8;
//			vector<int>vSize(intSize, 0);
//
//			for (size_t i = 0; i < intSize; i++)
//			{
//			for (size_t j = 0; j < n; j++)
//			{
//			if ((A[j] & (0x01 << i)) != 0)
//			++vSize[i];
//			}
//			}
//
//			int result = 0;
//			for (size_t i = 0; i < intSize; i++)
//			{
//			if (vSize[i] % 3 != 0)
//			result += (0x01 << i);
//			}
//			return result;*/
//
//		//����2���񷽷�
//		//����2.1
//		/*if (A == nullptr || (n - 1) % 3 != 0)
//			return -1;
//
//			int one = 0, two = 0;
//			for (size_t i = 0; i < n; i++)
//			{
//			one = (one ^ A[i]) & (~two);
//			two = (two ^ A[i]) & (~one);
//			}
//			return one;*/
//		//����2.2�������2.1������⣬
//		/*if (A == nullptr)
//			return -1;
//
//		int one = 0, two = 0, three = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			two ^= one & A[i];		//two����ֻ�������ε�λ����one&A[i]��ĳλΪ1ʱ��˵����λ���������Σ�������two�ĸ�λΪ1������ֻ�е�one����һλҲΪ1ʱ��˵�����������Σ������ø�λΪ0
//			one ^= A[i];			//one��ʾֻ������һ�ε�λ
//
//			three = two & one;		//threeֻ��ʾ��ǰ��one��two�У�����Щλ��Ϊ1
//
//			two = two & (~three);		//��֤one��two�в�������ͬ��λΪ1�����
//			one = one & (~three);
//		}
//		return one;		//one��ʾ��Щλ����һ�Σ�two��ʾ��Щλ��������
//*/
//
//	}
//};

/******************************************************************************
�������ƣ� singleNumber		Leetcode-15
����˵���� Given an array of integers, every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
�� �� ֵ�� int
��    ���� int A[]
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/04
******************************************************************************/
//class Solution {
//public:
//	int singleNumber(int A[], int n) 
//	{
//		int result = 0;
//		for (size_t i = 0; i < n; i++)
//			result ^= A[i];
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� candy		Leetcode-16
����˵���� There are N children standing in a line. Each child is assigned a rating value.
You are giving candies to these children subjected to the following requirements:
Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?
�� �� ֵ�� int
��    ���� vector<int> & ratings
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/05
******************************************************************************/
//class Solution {
//public:
//	int candy(vector<int> &ratings) 
//	{
//		//�ҵ������½��ݶ�
//		vector<int>vLMinNums(ratings.size()), vRMinNums(ratings.size());
//		vLMinNums[0] = 1;
//		vRMinNums[ratings.size() - 1] = 1;
//		int num = 1;
//		for (int i = 1; i < ratings.size(); i++)
//			vLMinNums[i] = ratings[i] > ratings[i - 1] ? ++num : num = 1;
//
//		num = 1;
//		for (int i = ratings.size() - 2; i >= 0; --i)
//			vRMinNums[i] = ratings[i] > ratings[i + 1] ? ++num : num = 1;
//
//		int result = 0;
//		for (size_t i = 0; i < ratings.size(); i++)
//			result += vLMinNums[i] > vRMinNums[i] ? vLMinNums[i] : vRMinNums[i];
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� canCompleteCircuit				Leetcode-17
����˵����
There are N gas stations along a circular route, where the amount of gas at station i is gas[i].
You have a car with an unlimited gas tank and it costs cost[i]of gas to travel from station i to its next station (i+1).
You begin the journey with an empty tank at one of the gas stations.
Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.
Note:
The solution is guaranteed to be unique.
�� �� ֵ�� int
��    ���� vector<int> & gas
��    ���� vector<int> & cost
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/05
******************************************************************************/
// class Solution {
// public:
// 	int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
// 	{
// 		//���취��O(n2)
// 		//if (gas.empty() || cost.empty() || gas.size() != cost.size())
// 		//	return -1;
// 
// 		//for (size_t i = 0; i < gas.size(); i++)
// 		//{
// 		//	//��gas i��ʼ
// 		//	int totalGas = gas[i], totalCost = cost[i];
// 		//	if (totalGas < totalCost)
// 		//		continue;
// 		//	size_t j = (i + 1) % gas.size();
// 		//	while (j != i)
// 		//	{
// 		//		totalGas += gas[j];
// 		//		totalCost += cost[j];
// 
// 		//		if (totalGas < totalCost)
// 		//			break;
// 		//		j = (++j) % gas.size();
// 		//	}
// 		//	if (j == i)
// 		//		return i;
// 		//}
// 		//return -1;
// 
// 		//��ѽⷨ-o(n)
// 		//���ǵ�����һ����Ψһ�⣬���Դ��κ�����λ�ó��������ܻص�ԭ�㡣���Կ��Ǵ�����վ��������������㹻���ٶ���һվ����������������������һվ��ֻ�е������Ƶ�Ŀ��λ��ʱ���ܻص�ԭ�㣻
// 		//if (gas.empty() || cost.empty() || gas.size() != cost.size())
// 		//	return -1;
// 
// 		//int start = gas.size() - 1, end = 0;
// 		//int sum = gas[start] - cost[start];
// 		//while (start > end)
// 		//{
// 		//	if (sum > 0)
// 		//	{
// 		//		++end;
// 		//		sum += (gas[end] - cost[end]);
// 		//	}
// 		//	else
// 		//	{
// 		//		--start;
// 		//		sum += (gas[start] + cost[start]);
// 		//	}
// 		//}
// 
// 		//if (sum >= 0)
// 		//	return start;
// 		//else
// 		//	return -1;
// 	}
// };

/******************************************************************************
�������ƣ� cloneGraph			Leetcode-17
����˵���� Clone an undirected graph. Each node in the graph contains alabeland a list of itsneighbors.

OJ's undirected graph serialization:
Nodes are labeled uniquely.
We use#as a separator for each node, and,as a separator for node label and each neighbor of the node.

As an example, consider the serialized graph{0,1,2# 1,2# 2,2}.
The graph has a total of three nodes, and therefore contains three parts as separated by#.
First node is labeled as0. Connect node0to both nodes1and2.
Second node is labeled as1. Connect node1to node2.
Third node is labeled as2. Connect node2to node2(itself), thus forming a self-cycle.
�� �� ֵ�� UndirectedGraphNode *
��    ���� UndirectedGraphNode * node
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/05
******************************************************************************/
//struct UndirectedGraphNode 
//{
//	int label;
//	vector<UndirectedGraphNode *> neighbors;
//	UndirectedGraphNode(int x) : label(x) {};
//};
//
//class Solution {
//public:
//	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node)
//	{
//		if (node == nullptr)
//			return nullptr;
//
//		//��������ͼ�ڵ�
//		queue<UndirectedGraphNode *>qNode;
//		set<UndirectedGraphNode *>uniqeNodes = { node };	//���в��ظ���node
//		qNode.push(node);
//
//		while (!qNode.empty())
//		{
//			UndirectedGraphNode *backNode = qNode.front();
//			UndirectedGraphNode *copyNode = new UndirectedGraphNode(backNode->label);
//			if (backNode->neighbors.empty() || backNode->neighbors.back() == backNode || backNode->neighbors.back()->label != backNode->label)
//			{
//				for (auto singleNode : backNode->neighbors)
//					qNode.push(singleNode);
//
//				uniqeNodes.insert(backNode);
//				backNode->neighbors.push_back(copyNode);
//			}
//			qNode.pop();
//		}
//
//		//�������п����ڵ��neighbors
//		for (auto &singleNode : uniqeNodes)
//		{
//			UndirectedGraphNode *copyNode = singleNode->neighbors.back();
//			for (size_t i = 0; i < singleNode->neighbors.size() - 1; i++)
//				copyNode->neighbors.push_back(singleNode->neighbors[i]->neighbors.back());
//		}
//		
//		//ɾ���������ӵ�nerghbor
//		UndirectedGraphNode *result = node->neighbors.back();
//		for (auto &singleNode : uniqeNodes)
//			singleNode->neighbors.pop_back();
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� minCut		Leetcode-18
����˵����
Given a string s, partition s such that every substring of the partition is a palindrome.
Return the minimum cuts needed for a palindrome partitioning of s.
For example, given s ="aab",
Return1since the palindrome partitioning["aa","b"]could be produced using 1 cut.
�� �� ֵ�� int
��    ���� string s
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//class Solution {
//public:
//	int minCut(string s)
//	{
//		if (s.empty())
//			return 0;
//		vector<int>vCuts(s.size() + 1, INT_MAX);
//		vCuts[0] = 0;
//		for (int i = 1; i <= s.size(); ++i)
//		{
//			for (size_t j = 0; j < i; ++j)
//			{
//				if (vCuts[j] == INT_MAX)
//					continue;
//				string strTmp = s.substr(j, i - j);
//				if (isPalindrome(strTmp))
//					vCuts[i] = j == 0 ? 0 : min(vCuts[i], vCuts[j] + 1);
//			}
//		}
//		return vCuts.back();
//	}
//
// 	//�ж��Ƿ�Ϊ��������
// 	bool isPalindrome(const string &s)
// 	{
// 		if (s.empty() || s.size() == 1)
// 			return true;
// 		auto iter1 = s.cbegin();
// 		auto iter2 = s.crbegin();
// 		for (; iter1 != s.end() && iter2 != s.rend();++iter1, ++iter2)
// 		{
// 			if (*iter1 != *iter2)
// 				return false;
// 		}
// 		return true;
// 	}
//};

/******************************************************************************
�������ƣ� partition	Leetcode-19
����˵���� Given a string s, partition s such that every substring of the partition is a palindrome.
Return all possible palindrome partitioning of s.
For example, given s ="aab",
Return
[
["aa","b"],
["a","a","b"]
]
�� �� ֵ�� vector<vector<string>>
��    ���� string s
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//class Solution {
//public:
//	vector<vector<string>> partition(string s)
//	{
//		//��̬�滮���÷����ó��Ľ��˳�򲻶�
//		/*vector<vector<string>>vvResult;
//		if (s.empty())
//		return vvResult;
//
//		vector<vector<bool>>vFlag(s.length(), vector<bool>(s.length(), false));
//		for (int i = 0; i < s.size(); i++)
//		{
//		vector<string>vTmp;
//		for (int j = i; j >= 0; --j)
//		{
//		if ((s[j] == s[i]) && (i - j < 2 || vFlag[i - 1][j + 1] == true))
//		{
//		vFlag[i][j] = true;
//		vTmp.push_back(s.substr(j, i - j + 1));
//		}
//		}
//		vvResult.push_back(vTmp);
//		}
//		return vvResult;*/
//
//		//���õݹ�
//		vector<vector<string>>res;
//		vector<string>path;
//		dfs(s, path, res);
//		return res;
//	}
//
//	void dfs(string s, vector<string>&path, vector<vector<string>>&res){
//
//		if (s.size() < 1){
//			res.push_back(path);
//			return;
//		}
//		for (int i = 0; i < s.size(); i++){
//			int begin = 0;
//			int end = i;
//			while (begin < end){
//				if (s[begin] == s[end]){
//					begin++;
//					end--;
//				}
//				else
//					break;
//			}
//			if (begin >= end){
//				path.push_back(s.substr(0, i + 1));
//				dfs(s.substr(i + 1), path, res);
//				path.pop_back();
//			}
//		}
//	}
//};

/******************************************************************************
�������ƣ� solve		Leetcode-20
����˵����
Given a 2D board containing'X'and'O', capture all regions surrounded by'X'.
A region is captured by flipping all'O's into'X's in that surrounded region .
For example,
X X X X
X O O X
X X O X
X O X X

After running your function, the board should be:
X X X X
X X X X
X X X X
X O X X
�� �� ֵ�� void
��    ���� vector<vector<char>> & board
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//class Solution {
//public:
//	void solve(vector<vector<char>> &board)
//	{
//		if (board.empty())
//			return;
//
//		vector<vector<bool>>vIsChecked(board.size(), vector<bool>(board.begin()->size(), false));
//		int row = board.size(), col = board.begin()->size();
//
//		//ֻ������ܵ�char
//		for (int i = 0; i < col; ++i)
//		{
//			if (board[0][i] == 'O' && vIsChecked[0][i] == false)
//				SetStatus(board, 0, i, row, col, vIsChecked);
//
//			if (row > 1)
//			{
//				if (board[row - 1][i] == 'O' && vIsChecked[row - 1][i] == false)
//					SetStatus(board, row - 1, i, row, col, vIsChecked);
//			}
//		}
//
//		if (row > 2)
//		{
//			for (int j = 1; j < row - 1; ++j)
//			{
//				if (board[j][0] == 'O' && vIsChecked[j][0] == false)
//					SetStatus(board, j, 0, row, col, vIsChecked);
//				
//				if (board[j][col - 1] == 'O' && vIsChecked[j][col - 1] == false)
//					SetStatus(board, j, col - 1, row, col, vIsChecked);				
//			}
//		}
//
//		for (size_t i = 0; i < row; i++)
//		{
//			for (size_t j = 0; j < col; j++)
//			{
//				if (board[i][j] == 'O' && vIsChecked[i][j] == false)
//					board[i][j] = 'X';
//			}
//		}
//		
//	}
//
//	void SetStatus(const vector<vector<char>>&board, int seedRow, int seedCol, const int &row, const int &col, vector<vector<bool>>&ioStatus )
//	{
//		ioStatus[seedRow][seedCol] = true;
//		queue<pair<int, int>>qPair;
//		qPair.push(make_pair(seedRow, seedCol));
//		while (!qPair.empty())
//		{
//			pair<int, int>pairTmp = qPair.front();
//			if (pairTmp.second > 0 && board[pairTmp.first][pairTmp.second - 1] == 'O' && ioStatus[pairTmp.first][pairTmp.second - 1] == false)
//			{
//				ioStatus[pairTmp.first][pairTmp.second - 1] = true;
//				qPair.push(make_pair(pairTmp.first, pairTmp.second - 1));
//			}
//
//			if (pairTmp.second < col - 1 && board[pairTmp.first][pairTmp.second + 1] == 'O' && ioStatus[pairTmp.first][pairTmp.second + 1] == false)
//			{
//				ioStatus[pairTmp.first][pairTmp.second + 1] = true;
//				qPair.push(make_pair(pairTmp.first, pairTmp.second + 1));
//			}
//
//			if (pairTmp.first > 0 && board[pairTmp.first - 1][pairTmp.second] == 'O' && ioStatus[pairTmp.first - 1][pairTmp.second] == false)
//			{
//				ioStatus[pairTmp.first - 1][pairTmp.second] = true;
//				qPair.push(make_pair(pairTmp.first - 1, pairTmp.second));
//			}
//
//			if (pairTmp.first < row - 1 && board[pairTmp.first + 1][pairTmp.second] == 'O' && ioStatus[pairTmp.first + 1][pairTmp.second] == false)
//			{
//				ioStatus[pairTmp.first + 1][pairTmp.second] = true;
//				qPair.push(make_pair(pairTmp.first + 1, pairTmp.second));
//			}
//
//			qPair.pop();
//		}
//	}
//};

/******************************************************************************
�������ƣ� sumNumbers		Leetcode-21
����˵����
Given a binary tree containing digits from0-9only, each root-to-leaf path could represent a number.
An example is the root-to-leaf path1->2->3which represents the number123.
Find the total sum of all root-to-leaf numbers.
For example,
1
/ \
2   3

The root-to-leaf path1->2represents the number12.
The root-to-leaf path1->3represents the number13.
Return the sum = 12 + 13 =25.
�� �� ֵ�� int
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//struct TreeNode 
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	int sumNumbers(TreeNode *root) 
//	{
//		if (root == 0)
//			return 0;
//		int sum = 0;
//		sumNumbers_help(root, root->val, sum);
//		return sum;
//	}
//
//	void sumNumbers_help(TreeNode *node, int num, int &sum)
//	{
//		if (node->left == nullptr && node->right == nullptr)
//		{
//			sum += num;
//			return;
//		}
//
//		if (node->left != nullptr)
//			sumNumbers_help(node->left, 10 * num + node->left->val, sum);
//		if (node->right != nullptr)
//			sumNumbers_help(node->right, 10 * num + node->right->val, sum);
//	}
//};

/******************************************************************************
�������ƣ� longestConsecutive		Leetcode-22
����˵����
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
For example,
Given[100, 4, 200, 1, 3, 2],
The longest consecutive elements sequence is[1, 2, 3, 4]. Return its length:4.
Your algorithm should run in O(n) complexity.
�� �� ֵ�� int
��    ���� vector<int> & num
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//class Solution {
//public:
//	int longestConsecutive(vector<int> &num) 
//	{
//		if (num.empty())
//			return 0;
//
//		int maxIndex = 0;
//		unordered_set<int>numHash(num.begin(), num.end());
//		for (int i = 0; i < num.size(); i++)
//		{
//			auto iterTmp = numHash.find(num[i]);
//			if (iterTmp != numHash.end())
//			{
//				numHash.erase(num[i]);
//				int index = 1;
//				for (int j = num[i] + 1; ; ++j)
//				{
//					auto iter1 = numHash.find(j);
//					if (iter1 != numHash.end())
//					{
//						++index;
//						numHash.erase(iter1);
//					}
//					else
//						break;
//				}
//				for (int j = num[i] - 1;; --j)
//				{
//					auto iter1 = numHash.find(j);
//					if (iter1 != numHash.end())
//					{
//						++index;
//						numHash.erase(iter1);
//					}
//					else
//						break;
//				}
//				maxIndex = max(maxIndex, index);
//			}
//		}
//		return maxIndex;
//	}
//};

/******************************************************************************
�������ƣ� findLadders	Leetcode-23
����˵����
Given two words (start and end), and a dictionary, find all shortest transformation sequence(s) from start to end, such that:
Only one letter can be changed at a time
Each intermediate word must exist in the dictionary
For example,
Given:
start ="hit"
end ="cog"
dict =["hot","dot","dog","lot","log"]
Return
[
["hit","hot","dot","dog","cog"],
["hit","hot","lot","log","cog"]
]

Note:
All words have the same length.
All words contain only lowercase alphabetic characters.
�� �� ֵ�� vector<vector<string>>
��    ���� string start
��    ���� string end
��    ���� unordered_set<string> & dict
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/08
******************************************************************************/
//class Solution {
//public:
//	vector<string> temp_path;
//	vector<vector<string>> result_path;
//
//	void GeneratePath(unordered_map<string, unordered_set<string>> &path, const string &start, const string &end)
//	{
//		temp_path.push_back(start);
//		if (start == end)
//		{
//			vector<string> ret = temp_path;
//			reverse(ret.begin(), ret.end());
//			result_path.push_back(ret);
//			return;
//		}
//
//		for (auto it = path[start].begin(); it != path[start].end(); ++it)
//		{
//			GeneratePath(path, *it, end);
//			temp_path.pop_back();
//		}
//	}
//
//	vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict)
//	{
//		temp_path.clear();
//		result_path.clear();
//
//		unordered_set<string> current_step;
//		unordered_set<string> next_step;
//
//		unordered_map<string, unordered_set<string>> path;
//
//		unordered_set<string> unvisited = dict;
//
//		if (unvisited.count(start) > 0)
//			unvisited.erase(start);
//
//		current_step.insert(start);
//
//		while (current_step.count(end) == 0 && unvisited.size() > 0)
//		{
//			for (auto pcur = current_step.begin(); pcur != current_step.end(); ++pcur)
//			{
//				string word = *pcur;
//
//				for (int i = 0; i < start.length(); ++i)
//				{
//					for (int j = 0; j < 26; j++)
//					{
//						string tmp = word;
//						if (tmp[i] == 'a' + j)
//							continue;
//						tmp[i] = 'a' + j;
//						if (unvisited.count(tmp) > 0)
//						{
//							next_step.insert(tmp);
//							path[tmp].insert(word);
//						}
//					}
//				}
//			}
//
//			if (next_step.empty()) break;
//			for (auto it = next_step.begin(); it != next_step.end(); ++it)
//			{
//				unvisited.erase(*it);
//			}
//
//			current_step = next_step;
//			next_step.clear();
//		}
//
//		if (current_step.count(end) > 0)
//			GeneratePath(path, end, start);
//
//		return result_path;
//	}
//};

/******************************************************************************
�������ƣ� isPalindrome		Leetcode-24
����˵����
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama"is a palindrome.
"race a car"is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.
For the purpose of this problem, we define empty string as valid palindrome.
��    ���� string s
�� �� ֵ�� bool
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/15
******************************************************************************/
//class Solution {
//public:
//	bool isPalindrome(string s) 
//	{
//		if (s.empty())
//			return false;
//		
//		auto iter1 = s.begin();
//		auto iter2 = s.rbegin();
//
//		while (true)
//		{
//			while (iter1 != s.end() && !((*iter1 >= 'a' && *iter1 <= 'z') || (*iter1 >= 'A' && *iter1 <= 'Z') || (*iter1 >= '0' && *iter1 <= '9')))
//				++iter1;
//
//			while (iter2 != s.rend() && !((*iter2 >= 'a' && *iter2 <= 'z') || (*iter2 >= 'A' && *iter2 <= 'Z') || (*iter2 >= '0' && *iter2 <= '9')) && iter2 != s.rend())
//				++iter2;
//
//			if (iter1 == s.end() || iter2 == s.rend())
//				break;
//
//			if (*iter1 == *iter2 || abs(*iter1 - *iter2) == abs('A' - 'a'))
//			{
//				++iter1;
//				++iter2;
//			}
//			else
//				return false;
//		}
//
//		if (iter1 != s.end())
//		{
//			while (iter1 != s.end() && !((*iter1 >= 'a' && *iter1 <= 'z') || (*iter1 >= 'A' && *iter1 <= 'Z') || (*iter1 >= '0' && *iter1 <= '9')))
//				++iter1;
//
//			if (iter1 != s.end())
//				return false;
//		}
//
//		if (iter2 != s.rend())
//		{
//			while (iter2 != s.rend() && !((*iter2 >= 'a' && *iter2 <= 'z') || (*iter2 >= 'A' && *iter2 <= 'Z') || (*iter2 >= '0' && *iter2 <= '9')) && iter2 != s.rend())
//				++iter2;
//
//			if (iter2 != s.rend())
//				return false;
//		}
//		return true;
//	}
//};

/******************************************************************************
�������ƣ� maxPathSum		Leetcode-25
����˵����
Given a binary tree, find the maximum path sum.

The path may start and end at any node in the tree.

For example:
Given the below binary tree,

1
/ \
2   3

Return6.
��    ���� TreeNode * root
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/15
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	int maxPathSum(TreeNode *root) 
//	{
//		if (root == nullptr)
//			return 0;
//
//		int maxSum = INT_MIN;
//		maxPathSum_aux(root, maxSum);
//		return maxSum;
//	}
//
//	//����root��߻����ұ����һ��·�������ֵ
//	int maxPathSum_aux(TreeNode *root, int &maxSum)
//	{
//		if (root == nullptr)
//			return 0;
//
//		if (root->left == nullptr && root->right == nullptr)
//		{
//			maxSum = max(maxSum, root->val);
//			return root->val;
//		}
//
//		int lval = maxPathSum_aux(root->left, maxSum);
//		int rval = maxPathSum_aux(root->right, maxSum);
//
//		int maxOflr = root->val, lval_add = root->val, rval_add = root->val;
//		if (lval > 0)
//		{
//			lval_add += lval;
//			maxOflr += lval;
//		}
//		if (rval > 0)
//		{
//			rval_add += rval;
//			maxOflr += rval;
//		}
//
//		maxSum = max(maxSum, maxOflr);
//
//		return max(lval_add, rval_add);
//	}
//};
//}; 

/******************************************************************************
�������ƣ� maxProfit		Leetcode-26
����˵����
Say you have an array for which the i th element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete at most two transactions.

Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
��    ���� vector<int> & prices
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/15
******************************************************************************/
//class Solution {
//public:
//	//����ʵ��������һ�������Ĺ�Ʊ�۸�ͼ�У��ҵ���ֵ������������������ϡ�˼·����һ��������¼��ͷ��β�������ֵ��ϣ���һ������¼�ڴ�֮ǰ�������������ͣ������ָ���Ĳ�ֵ���ʱ��
//	//������������
//	int maxProfit(vector<int> &prices) 
//	{
//		if (prices.size() == 0 || prices.size() == 1)
//			return 0;
//
//		int firstBuy = INT_MIN, firstSell = INT_MIN, secBuy = INT_MIN, secSell = INT_MIN;
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			firstBuy = max(firstBuy, -prices[i]);
//			firstSell = max(firstSell, firstBuy + prices[i]);
//			secBuy = max(secBuy, firstSell - prices[i]);
//			secSell = max(secSell, secBuy + prices[i]);
//		}
//		return secSell;
//	}
//};

/******************************************************************************
�������ƣ� maxProfit		Leetcode-27
����˵���� Say you have an array for which the i th element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the
stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
��    ���� vector<int> & prices
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/17
******************************************************************************/
//class Solution {
//public:
//	int maxProfit(vector<int> &prices) 
//	{
//		if (prices.size() == 0 || prices.size() == 1)
//			return 0;
//
//		int prePrice = prices[0], totolSum = 0;
//		for (int i = 1; i < prices.size(); ++i)
//		{
//			if (prices[i] > prePrice)
//			{
//				totolSum += (prices[i] - prePrice);
//			}
//			prePrice = prices[i];
//		}
//		return totolSum;
//	}
//};

/******************************************************************************
�������ƣ� maxProfit		Leetcode-28
����˵���� Say you have an array for which the i th element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to
find the maximum profit.
��    ���� vector<int> & prices
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/17
******************************************************************************/
//class Solution {
//public:
//	int maxProfit(vector<int> &prices) 
//	{
//		if (prices.size() == 0 || prices.size() == 1)
//			return 0;
//
//		int firstBuy = INT_MIN, firstSell = INT_MIN;
//		for (int i = 0; i < prices.size(); ++i)
//		{
//			firstBuy = max(firstBuy, -prices[i]);
//			firstSell = max(firstSell, firstBuy + prices[i]);
//		}
//		return firstSell;
//	}
//};
//}; 

/******************************************************************************
�������ƣ� minimumTotal		Leetcode-29
����˵���� Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.
For example, given the following triangle
[
[2],
[3,4],
[6,5,7],
[4,1,8,3]
]
The minimum path sum from top to bottom is11(i.e., 2 + 3 + 5 + 1 = 11).
Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
��    ���� vector<vector<int> > & triangle
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/17
******************************************************************************/
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) 
//	{
//		if (triangle.empty())
//			return -1;
//		vector<vector<int>>vResult(triangle.size(), vector<int>());
//
//		vResult.back() = triangle.back();
//		for (int i = triangle.size() - 2; i >= 0; --i)
//		{
//			for (int j = 0; j < triangle[i].size(); ++j)
//			{
//				vResult[i].push_back(triangle[i][j] + min(vResult[i + 1][j], vResult[i + 1][j + 1]));
//			}
//		}
//		
//		return vResult.front().front();
//	}
//};

/******************************************************************************
�������ƣ� getRow		Leetcode-30
����˵����
Given an index k, return the k th row of the Pascal's triangle.

For example, given k = 3,
Return[1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?
��    ���� int rowIndex
�� �� ֵ�� vector<int>
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/17
******************************************************************************/
//class Solution {
//public:
//	vector<int> getRow(int rowIndex) 
//	{
//		if (rowIndex < 1)
//			return vector<int>(1, 1);
//
//		vector<int>vResult(rowIndex + 1, 1);
//		for (int i = 2; i <= rowIndex; ++i)
//		{
//			for (int j = i - 1; j > 0; --j)
//			{
//				vResult[j] += vResult[j - 1];
//			}
//		}
//		return vResult;
//	}
//};

/******************************************************************************
�������ƣ� connect		Leetcode-31
����˵����
Follow up for problem "Populating Next Right Pointers in Each Node".

What if the given tree could be any binary tree? Would your previous solution still work?

Note:

You may only use constant extra space.

For example,
Given the following binary tree,

1
/  \
2    3
/ \    \
4   5    7

After calling your function, the tree should look like:

1 -> NULL
/  \
2 -> 3 -> NULL
/ \    \
4-> 5 -> 7 -> NULL
��    ���� TreeLinkNode * root
�� �� ֵ�� void
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/17
******************************************************************************/
//struct TreeLinkNode {
//	int val;
//	TreeLinkNode *left, *right, *next;
//	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//
//};
//class Solution {
//public:
//	void connect(TreeLinkNode *root)
//	{
//		TreeLinkNode *rootTmp = root;	//ÿһ�е�root
//		TreeLinkNode headNode(-1);
//		while (rootTmp != nullptr)
//		{
//			TreeLinkNode *nodeFlag = &headNode;
//			auto nodeTmp = rootTmp;
//			rootTmp = nullptr;
//			for (; nodeTmp != nullptr; nodeTmp = nodeTmp->next)
//			{
//				if (nodeTmp->left != nullptr)
//				{
//					if (rootTmp == nullptr)
//						rootTmp = nodeTmp->left;
//
//					nodeFlag->next = nodeTmp->left;
//					nodeFlag = nodeFlag->next;
//				}
//				if (nodeTmp->right != nullptr)
//				{
//					if (rootTmp == nullptr)
//						rootTmp = nodeTmp->right;
//
//					nodeFlag->next = nodeTmp->right;
//					nodeFlag = nodeFlag->next;
//				}
//			}
//		}
//	}
//};

/******************************************************************************
�������ƣ� numDistinct
����˵����
Given a string S and a string T, count the number of distinct subsequences of T in S.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without
disturbing the relative positions of the remaining characters. (ie,"ACE"is a subsequence of"ABCDE"while"AEC"is not).
Here is an example:
S ="rabbbit", T ="rabbit"
Return3.
��    ���� string S
��    ���� string T
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/18
******************************************************************************/
//class Solution {
//public:
//	int numDistinct(string S, string T) 
//	{
//		//�ݹ鷽��
//// 		if (T.empty())
//// 			return 1;
//// 		if (S.empty())
//// 			return 0;
//// 
//// 		return numDistinct_aux(S, 0, T, 0);
//// 		
//		//��̬�滮
//		//vvResult[j + 1][i + 1]��ʾS[i]��T[j]����������������
//		//	����S[i]��T[j]���������ȣ��������ɽ�S[i]ȥ�������ಿ����S[i - 1]һ�£�
//		//	�����ȣ�����������������ɾ��S[i]����ȼ���vvResult[j][i]���������S������S[i - 1]֮ǰ��T[j - 1]����������������
//		//if (T.empty())
//		//	return 1;
//		//if (S.empty())
//		//	return 0;
//
//		//int sizeS = S.size(), sizeT = T.size();
//		//vector<vector<int>>vvResult(sizeT + 1, vector<int>(sizeS + 1, 0));
//		//vvResult[0] = vector<int>(sizeS + 1, 1);
//		//for (int i = 0; i < sizeS; ++i)
//		//{
//		//	for (int j = 0; j < sizeT; ++j)
//		//	{
//		//		vvResult[j + 1][i + 1] = S[i] == T[j] ? vvResult[j + 1][i] + vvResult[j][i] : vvResult[j + 1][i];
//		//	}
//		//}
//		//return vvResult.back().back();
//	}
//
//	int numDistinct_aux(const string &S, int indexS, const string &T, int indexT)
//	{
//		if (indexT == T.size())
//			return 1;
//		if (indexS == S.size() || S.size() - indexS < T.size() - indexT)
//			return 0;
//
//		int sum = 0;
//		for (int i = indexS; i < S.size(); ++i)
//		{
//			if (S[i] != T[indexT])
//				continue;
//
//			sum += numDistinct_aux(S, i + 1, T, indexT + 1);
//		}
//		return sum;
//	}
//};

/******************************************************************************
�������ƣ� isBalanced
����˵����
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees
of every node never differ by more than 1.
��    ���� TreeNode * root
�� �� ֵ�� bool
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/18
******************************************************************************/
//struct TreeNode 
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	bool isBalanced(TreeNode *root) 
//	{
//		if (root == nullptr)
//			return true;
//		int leftHight = 0, rightHight = 0;
//		return isBalanced_aux(root, leftHight, rightHight);
//	}
//
//	bool isBalanced_aux(TreeNode *root, int &leftHight, int &rightHight)
//	{
//		if (root->left == nullptr && root->right == nullptr)
//		{
//			leftHight = 1;
//			rightHight = 1;
//			return true;
//		}
//
//		int lleftHight = 0, rleftHight = 0, lrightHight = 0, rrightHight = 0;
//		if (root->left != nullptr)
//		{
//			bool lStatus = isBalanced_aux(root->left, lleftHight, rleftHight);
//			if (lStatus == false)
//				return false;
//		}
//		if (root->right != nullptr)
//		{
//			bool rStatus = isBalanced_aux(root->right, lrightHight, rrightHight);
//			if (rStatus == false)
//				return false;
//		}
//
//		lleftHight = max(lleftHight, rleftHight);
//		lrightHight = max(lrightHight, rrightHight);
//
//		if (abs(lleftHight - lrightHight) > 1)
//			return false;
//
//		leftHight = lleftHight + 1;
//		rightHight = lrightHight + 1;
//		return true;
//	}
//};

/******************************************************************************
�������ƣ� sortedListToBST
����˵���� Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.
��    ���� ListNode * head
�� �� ֵ�� TreeNode*
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/29
******************************************************************************/
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* sortedListToBST(ListNode* head) 
//	{
//		return toBST(head, nullptr);
//	}
//
//	TreeNode* toBST(ListNode* head, ListNode* tail) 
//	{
//		if (head == tail)
//			return nullptr;
//		// ��������ָ�룬fast�ƶ��ٶ���low������
//		ListNode* fast = head;
//		ListNode* slow = head;
//		while (fast != tail && fast->next != tail) {
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		TreeNode* root = new TreeNode(slow->val);
//		root->left = toBST(head, slow);
//		root->right = toBST(slow->next, tail);
//
//		return root;
//	}
//};

/******************************************************************************
�������ƣ� levelOrderBottom
����˵����
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree{3,9,20,#,#,15,7},

3
/ \
9  20
/  \
15   7

return its bottom-up level order traversal as:

[
[15,7]
[9,20],
[3],
]
��    ���� TreeNode * root
�� �� ֵ�� vector<vector<int> >
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/29
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	vector<vector<int> > levelOrderBottom(TreeNode *root)
//	{
//		vector<vector<int>>vvResult;
//		if (root == nullptr)
//			return vvResult;
//
//		queue<TreeNode *>qNodes;
//		qNodes.push(root);
//		levelOrderBottom_help(qNodes, vvResult);
//		reverse(vvResult.begin(), vvResult.end());
//		return vvResult;
//	}
//
//	void levelOrderBottom_help(queue<TreeNode *>&rNodes, vector<vector<int>>&rResult)
//	{
//		if (rNodes.empty())
//			return;
//		int index = rNodes.size();
//		rResult.push_back(vector<int>());
//		for (int i = 0; i < index; ++i)
//		{
//			rResult.back().push_back(rNodes.front()->val);
//			if (rNodes.front()->left != nullptr)
//				rNodes.push(rNodes.front()->left);
//			if (rNodes.front()->right != nullptr)
//				rNodes.push(rNodes.front()->right);
//			rNodes.pop();
//		}
//		levelOrderBottom_help(rNodes, rResult);
//		return;
//	}
//};

/******************************************************************************
�������ƣ� isSymmetric
����˵����
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree is symmetric:

1
/ \
2   2
/ \ / \
3  4 4  3

But the following is not:

1
/ \
2   2
\   \
3    3
��    ���� TreeNode * root
�� �� ֵ�� bool
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/29
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	bool isSymmetric(TreeNode *root)
//	{
//		if (root == nullptr)
//			return false;
//		deque<TreeNode *>lNodes, rNodes;
//		if (root->left != nullptr)
//			lNodes.push_back(root->left);
//		if (root->right != nullptr)
//			rNodes.push_back(root->right);
//
//		return isSymmetric_aux(lNodes, rNodes);
//	}
//
//	bool isSymmetric_aux(deque<TreeNode *>&lNodes, deque<TreeNode *>&rNodes)
//	{
//		if (lNodes.size() != rNodes.size())
//			return false;
//
//		if (lNodes.empty() && rNodes.empty())
//			return true;
//
//		int index = lNodes.size();
//		for (int i = 0; i < index; ++i)
//		{
//			if ((lNodes.front() == nullptr && rNodes.back() != nullptr) || (lNodes.front() != nullptr && rNodes.back() == nullptr) ||
//				(lNodes.front() != nullptr && rNodes.back() != nullptr && lNodes.front()->val != rNodes.back()->val))
//				return false;
//
//			if (lNodes.front() != nullptr)
//			{
//				if (lNodes.front()->left != nullptr && lNodes.front()->right != nullptr)
//				{
//					lNodes.push_back(lNodes.front()->left);
//					lNodes.push_back(lNodes.front()->right);
//				}
//				else if (lNodes.front()->right == nullptr)
//				{
//					lNodes.push_back(lNodes.front()->left);
//					lNodes.push_back(nullptr);
//				}
//				else
//				{
//					lNodes.push_back(nullptr);
//					lNodes.push_back(lNodes.front()->right);
//				}
//			}
//			lNodes.pop_front();
//			
//			if (rNodes.back() != nullptr)
//			{
//				if (rNodes.back()->right != nullptr && rNodes.back()->left != nullptr)
//				{
//					rNodes.push_front(rNodes.back()->right);
//					rNodes.push_front(rNodes.back()->left);
//				}
//				else if (rNodes.back()->left == nullptr)
//				{
//					rNodes.push_front(rNodes.back()->right);
//					rNodes.push_front(nullptr);
//				}
//				else
//				{
//					rNodes.push_front(nullptr);
//					rNodes.push_front(rNodes.back()->left);
//				}
//			}
//			rNodes.pop_back();
//		}
//		return isSymmetric_aux(lNodes, rNodes);
//	}
//};

//class Solution
//{
//public:
//	int GetMinAdjustCost(vector<int>input, int target)
//	{
//		if (input.empty())
//			return -1;
//
//		int minNum = INT_MAX, maxNum = INT_MIN;
//		for (size_t i = 0; i < input.size(); i++)
//		{
//			if (input[i] > maxNum)
//				maxNum = input[i];
//			if (input[i] < minNum)
//				minNum = input[i];
//		}
//
//		int maxDiff = maxNum - minNum;
//		vector<vector<int>>rec(input.size(), vector<int>(maxDiff, INT_MAX));
//		for (size_t i = 0; i < maxDiff; i++)
//			rec[0][i] = 0;
//		for (size_t i = 1; i < input.size(); i++)
//		{
//			for (size_t j = 0; j < maxDiff; j++)
//			{
//				for (size_t k = 0; k < maxDiff; k++)
//				{
//					abs(k - j) > target;
//					if ()
//				}
//			}
//		}
//	}
//};

struct PersonInfo
{
	string name;
	vector<string>phones;
};

int _tmain(int argc, _TCHAR* argv[])
{
	/*string line, word;
	vector<PersonInfo>people;

	while (getline(std::cin, line))
	{
	stringstream record(line);
	PersonInfo info;
	record >> info.name;
	while (record >> word)
	info.phones.push_back(word);

	people.push_back(info);
	}*/

	int i = 0;
	cout << "a";
	cin >> i;
	cout << "b";
	return 0;
}
