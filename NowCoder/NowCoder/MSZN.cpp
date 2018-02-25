#include <unordered_map>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stack>

using namespace std;

//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution
//{
//public:
//	/******************************************************************************
//	�������ƣ� maxLength
//	����˵���� ����һ���������飬����Ԫ�ؿ������ɸ�����0������һ������k����arr���е����������ۼӺ�Ϊk��������鳤��
//	��    ���� vector<int>vArr
//	��    ���� int k
//	�� �� ֵ�� int
//	��    �ߣ� Cheng Deng
//	��    �ڣ� 2018/01/22
//	******************************************************************************/
//	int maxLength(vector<int>vArr, int k)
//	{
//		int result = 0;	//��󳤶�
//		if (vArr.empty())
//			return 0;
//
//		int sumTmp = 0;
//		unordered_map<int, int>sumToMinIndex;
//		sumToMinIndex.insert(make_pair(0, -1));
//
//		for (int i = 0; i < vArr.size(); ++i)
//		{
//			sumTmp += vArr[i];
//			auto iter1 = sumToMinIndex.find(sumTmp - k);
//			if (iter1 != sumToMinIndex.end())
//				result = max(result, i - iter1->second);
//
//			if (sumToMinIndex.find(sumTmp) == sumToMinIndex.end())
//				sumToMinIndex.insert(make_pair(sumTmp, i));
//		}
//		return result;
//	}
//
//	/******************************************************************************
//	 �������ƣ� GetMaxLength
//	 ����˵���� �ڶ��������ҵ��ۼӺ�Ϊָ��ֵ���·������
//	 ����һ�ö�������ͷ���head��һ��32λ����sum���������ڵ�ֵ����Ϊ���������ۼӺ�Ϊsum���·�����ȡ�
//	 ·����ָ��ĳ���ڵ����£�ÿ�����ѡ��һ�����ӽڵ���߲�ѡ���γɵĽڵ�����
//	 ��    ���� TreeNode * head 
//	 ��    ���� int sum 
//	 �� �� ֵ�� int
//	 ��    �ߣ� Cheng Deng
//	 ��    �ڣ� 2018/01/22
//	******************************************************************************/
//	int GetMaxLength(TreeNode *head, int sum)
//	{
//		int result = 0;
//		if (head == nullptr)
//			return 0;
//		stack<TreeNode *>sNodes;
//		unordered_map<int, int>sumToMinLayer;
//		sumToMinLayer.insert(make_pair(0, 0));
//
//		int sumTmp = 0;
//		do
//		{
//			sNodes.push(head);
//			sumTmp += head->val;
//			auto iter1 = sumToMinLayer.find(sumTmp - sum);
//			if (iter1 != sumToMinLayer.end())
//				result = max(result, (int)sNodes.size() - iter1->second);
//
//			if (sumToMinLayer.find(sumTmp) == sumToMinLayer.end())
//				sumToMinLayer.insert(make_pair(sumTmp, sNodes.size()));
//
//			//����head
//			if (head->left != nullptr)
//				head = head->left;
//			else if (head->right != nullptr)
//				head = head->right;
//			else
//			{
//				sNodes.pop();
//				if (sumToMinLayer[sumTmp] == (sNodes.size() + 1))
//					sumToMinLayer.erase(sumTmp);
//				sumTmp -= head->val;
//
//				while ((sNodes.top()->left == head && sNodes.top()->right == nullptr) || sNodes.top()->right == head)
//				{
//					head = sNodes.top();
//					sNodes.pop();
//					if (sNodes.empty())
//						break;
//					if (sumToMinLayer[sumTmp] == (sNodes.size() + 1))
//						sumToMinLayer.erase(sumTmp);
//					sumTmp -= head->val;
//				}
//
//				head = sNodes.top()->right;
//			}
//		} while (!sNodes.empty());
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� GetIndexOf
����˵���� KMP�㷨
��    ���� string s
��    ���� string m
�� �� ֵ�� int
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/25
******************************************************************************/
//class Solution
//{
//public:
//	int GetIndexOf(string s, string m)
//	{
//		if (s.empty() || m.empty() || s.size() < m.size())
//			return -1;
//
//		vector<int>helpArray = GetHelpArray(m);
//
//		int flag = 0;
//		int indexTmp = 0;
//		while (flag < s.size() && (m.size() - indexTmp) <= (s.size() - flag))
//		{
//			if (s[flag] == m[indexTmp])
//			{
//				++flag;
//				++indexTmp;
//				if (indexTmp == m.size())
//					return flag - indexTmp;
//			}
//			else
//			{
//				while (s[flag] != m[indexTmp] && indexTmp > 0)
//					indexTmp = helpArray[indexTmp];
//
//				if (s[flag] == m[indexTmp])
//					++indexTmp;
//				++flag;
//			}
//		}
//
//		return -1;
//	}
//
//	vector<int>GetHelpArray(const string &m)
//	{
//		vector<int>result(m.size(), 0);
//		if (m.size() == 0)
//			return result;
//
//		result[0] = -1;
//
//		int flag = 2;	//��ǰ�ȶԵ�����
//		int indexTmp = 0;
//
//		while (flag < m.size())
//		{
//			if (m[flag - 1] == m[indexTmp])
//				result[flag++] = ++indexTmp;
//			else if (indexTmp > 0)
//				indexTmp = result[indexTmp];
//			else
//				result[flag++] = 0;
//		}
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� LowestAncestor
����˵���� �ڶ������в��������������
��    ���� TreeNode * head
��    ���� TreeNode * node1
��    ���� TreeNode * node2
�� �� ֵ�� TreeNode *
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/29
******************************************************************************/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution
//{
//public:
//	TreeNode *LowestAncestor(TreeNode *head, TreeNode *node1, TreeNode *node2)
//	{
//		vector<TreeNode *>vNodes = {node1, node2};
//		vector<bool>hasNode(vNodes.size(), false);
//
//		isChildNode(head, vNodes, hasNode);
//		for (int i = 0; i < hasNode.size() ; ++i)
//		{
//			if (hasNode[i] == false)
//				return nullptr;
//		}
//
//		return LowestAncestor_aux(head, node1, node2);
//	}
//
//	TreeNode *LowestAncestor_aux(TreeNode *head, TreeNode *node1, TreeNode *node2)
//	{
//		if (head == nullptr || head == node1 || head == node2)
//			return head;
//
//		TreeNode *lNode = LowestAncestor(head->left, node1, node2);
//		TreeNode *rNode = LowestAncestor(head->right, node1, node2);
//
//		if (lNode != nullptr && rNode != nullptr)
//			return head;
//
//		return lNode == nullptr ? rNode : lNode;
//	}
//
//	void isChildNode(TreeNode *head, vector<TreeNode *>vNodes, vector<bool>&hasNodes)
//	{
//		if (head == nullptr || vNodes.empty())
//			return;
//		for (int i = 0; i < vNodes.size(); ++i)
//		{
//			if (vNodes[i] == head)
//				hasNodes[i] = true;
//		}
//		isChildNode(head->left, vNodes, hasNodes);
//		isChildNode(head->right, vNodes, hasNodes);
//	}
//};

//************************************
// Method:    GetPosArray
// FullName:  Solution::GetPosArray
// Access:    private 
// Returns:   vector<int>
// Qualifier: ����ǰ���������������ȡ������������
// Parameter: vector<int>preArray
// Parameter: vector<int>inArray
//************************************
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution
//{
//public:
//	vector<int>GetPosArray(vector<int>preArray, vector<int>inArray)
//	{
//		if (preArray.empty() || inArray.empty() || preArray.size() != inArray.size())
//			return vector<int>();
//
//		vector<int>result;
//		GetPosArray_aux(preArray, 0, preArray.size(), inArray, 0, inArray.size(), result);
//		return result;
//	}
//	
//	void GetPosArray_aux(const vector<int>&preArray, int preBg1, int preEnd1, const vector<int>&inArray, 
//		int inBg2, int inEnd2, vector<int>&resultArray)
//	{
//		if (preEnd1 - preBg1 < 1 || inEnd2 - inBg2 < 1 )
//			return;
//
//		int flag = preArray[preBg1];
//		int inNum = inBg2;
//		while (inNum < inEnd2)
//		{
//			if (inArray[inNum] != flag)
//				inNum++;
//			else
//				break;
//		}
//		GetPosArray_aux(preArray, preBg1 + 1, preBg1 + 1 + (inNum - inBg2), inArray, inBg2, inNum, resultArray);
//		GetPosArray_aux(preArray, preBg1 + 1 + (inNum - inBg2), preEnd1, inArray, inNum + 1, inEnd2, resultArray);
//		resultArray.push_back(preArray[preBg1]);
//	}
//};