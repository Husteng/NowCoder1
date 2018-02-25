#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <xutility>
#include <iterator>
#include <queue>
#include <list>
#include <set>
#include <algorithm>
#include <string>
#include <hash_set>
#include <map>
#include <tchar.h>

//
//int _tmain(int argc, _TCHAR* argv[])
//{
//
//	return 0;
//}


/******************************************************************************
�������ƣ� Find	��ָoffer��1��
����˵���� ��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
�� �� ֵ�� bool
��    ���� int target
��    ���� vector<vector<int> > array
��    �ߣ� Cheng Deng
��    �ڣ� 2017/10/30
******************************************************************************/
//bool Find(int target, vector<vector<int> > array) {
//	if (array.empty())
//		return false;
//	size_t maxIndex = array[0].size() - 1;
//	for (size_t i = 0; i < array.size(); i++)
//	{
//		if (array[i].empty())
//			continue;
//		if (array[i][0] == target)
//			return true;
//		else if (array[i][0] < target)
//		{
//			if (array[i][maxIndex] >= target)
//			{
//				for (size_t j = maxIndex; j >= 0; j--)
//				{
//					if (array[i][j] == target)
//						return true;
//					else if (array[i][j] > target)
//						maxIndex = j;
//					else
//						break;
//				}
//			}
//			else
//				continue;
//		}
//		else
//			return false;
//	}
//	return false;
//}

/******************************************************************************
�������ƣ� replaceSpace	��ָoffer��2��
����˵���� ��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
�� �� ֵ�� void
��    ���� char * str
��    ���� int length
��    �ߣ� Cheng Deng
��    �ڣ� 2017/10/30
******************************************************************************/
// void replaceSpace(char *str, int length) {
// 	if (str == nullptr || length == 0)
// 		return;
// 
// 	string strTmp;
// 	for (size_t i = 0; str[i] != '\0'; i++)
// 	{
// 		if (str[i] == ' ')
// 		{
// 			strTmp += "%20";
// 		}
// 		else
// 		{
// 			strTmp += str[i];
// 		}
// 	}
// 	if (length < strTmp.size())
// 	{
// 		return;
// 	}
// 	memset(str, '\0', length);
// 	//strcpy(str, strTmp.c_str());
// 	strncpy(str, strTmp.c_str(), strTmp.size());
// }

/******************************************************************************
�������ƣ� printListFromTailToHead	��ָoffer��3��
����˵���� ����һ��������β��ͷ��ӡ����ÿ���ڵ��ֵ��
�� �� ֵ�� vector<int>
��    ���� ListNode * head
��    �ߣ� Cheng Deng
��    �ڣ� 2017/10/31
******************************************************************************/
// struct ListNode
// {
// 	int val;
// 	struct ListNode *next;
// 	ListNode(int x) :
// 		val(x), next(NULL)
// 	{
// 
// 	}
// };
// vector<int> printListFromTailToHead(ListNode* head) 
// {
// 	vector<int>result;
// 	if (nullptr == head)
// 		return result;
// 
// 	stack<int>stackTmp;
// 	while (head != nullptr)
// 	{
// 		stackTmp.push(head->val);
// 		head = head->next;
// 	}
// 
// 	while (0 != stackTmp.size())
// 	{
// 		result.push_back(stackTmp.top());
// 		stackTmp.pop();
// 	}
// 	return result;
// }

/******************************************************************************
�������ƣ� reConstructBinaryTree	��ָoffer��4��
����˵���� ����ĳ��������ǰ���������������Ľ�������ؽ����ö����������������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�
�� �� ֵ�� TreeNode*
��    ���� vector<int> pre
��    ���� vector<int> vin
��    �ߣ� Cheng Deng
��    �ڣ� 2017/10/31
******************************************************************************/
// struct TreeNode {
// 	int val;
// 	TreeNode *left;
// 	TreeNode *right;
// 	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
// 
// TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
// {
// 	//�ݹ�д��
// 	TreeNode *nodeTmp = nullptr;
// 	if (pre.empty() || vin.empty())
// 		return nodeTmp;
// 
// 	nodeTmp = new TreeNode(pre[0]);
// 	vector<int>preTmp_left, vinTmp_left, preTmp_right, vinTmp_right;
// 	bool isLeft = true;
// 	for (size_t i = 0; i < vin.size(); i++)
// 	{
// 		if (vin[i] == pre[0])
// 		{
// 			isLeft = false;
// 			continue;
// 		}
// 		isLeft ? vinTmp_left.push_back(vin[i]) : vinTmp_right.push_back(vin[i]);
// 	}
// 	copy(pre.begin() + 1, pre.begin() + 1 + vinTmp_left.size(), back_inserter(preTmp_left));
// 	copy(pre.end() - vinTmp_right.size(), pre.end(), back_inserter(preTmp_right));
// 	nodeTmp->left = reConstructBinaryTree(preTmp_left, vinTmp_left);
// 	nodeTmp->right = reConstructBinaryTree(preTmp_right, vinTmp_right);
// 	return nodeTmp;
// }

/******************************************************************************
�������ƣ� push	��ָoffer��5��
����˵����������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
�� �� ֵ�� void
��    ���� int node
��    �ߣ� Cheng Deng
��    �ڣ� 2017/10/31
******************************************************************************/
// class Solution
// {
// public:
// 	void push(int node) 
// 	{
// 		stack1.push(node);
// 	}
// 
// 	int pop() 
// 	{
// 		int nodeTmp;
// 		if (!stack2.empty())
// 		{
// 			nodeTmp = stack2.top();
// 			stack2.pop();
// 			return nodeTmp;
// 		}
// 		else
// 		{
// 			while (stack1.size())
// 			{
// 				stack2.push(stack1.top());
// 				stack1.pop();
// 			}
// 			if (!stack2.empty())
// 			{
// 				nodeTmp = stack2.top();
// 				stack2.pop();
// 				return nodeTmp;
// 			}
// 		}
// 		return 0;
// 	}
// 
// private:
// 	stack<int> stack1;
// 	stack<int> stack2;
// };

/******************************************************************************
�������ƣ� minNumberInRotateArray	��ָoffer��6��
����˵���� ��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� ����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1�� NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
�� �� ֵ�� int
��    ���� vector<int> rotateArray
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/01
******************************************************************************/
// class Solution {
// public:
// 	int minNumberInRotateArray(vector<int> rotateArray)
// 	{
// 		if (rotateArray.empty())
// 			return 0;
// 
// 		size_t leftIndex = 0;
// 		size_t rightIndex = rotateArray.size() - 1;
// 		size_t midIndex = 0;
// 		if (rotateArray[rightIndex] > rotateArray[leftIndex])
// 			return rotateArray[leftIndex];
// 
// 		while (rotateArray[leftIndex] >= rotateArray[rightIndex])
// 		{
// 			if (rightIndex - leftIndex == 1)
// 			{
// 				midIndex = rightIndex;
// 				break;
// 			}
// 			midIndex = leftIndex + (rightIndex - leftIndex) / 2;
// 
// 			//����11101�����ظ����
// 			if (rotateArray[leftIndex] == rotateArray[rightIndex] && rotateArray[leftIndex] == rotateArray[midIndex])
// 			{
// 				int minInt = rotateArray[leftIndex];
// 				for (size_t i = leftIndex + 1; i <= rightIndex; i++)
// 				{
// 					//��һ�������λ�ÿ϶�������Сֵλ��
// 					if (rotateArray[i] < rotateArray[minInt])
// 						return rotateArray[i];
// 					else
// 						minInt = i;
// 				}
// 				return rotateArray[minInt];
// 			}
// 
// 			if (rotateArray[midIndex] >= rotateArray[leftIndex])
// 				leftIndex = midIndex;
// 			else
// 				rightIndex = midIndex;
// 		}
// 		return rotateArray[midIndex];
// 	}
// };

/******************************************************************************
�������ƣ� Fibonacci	��ָoffer��6��
����˵���� ��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n�
�� �� ֵ�� int
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/01
******************************************************************************/
//class Solution {
//public:
//	int Fibonacci(int n) 
//	{
//		if (n < 1)
//			return 0;
//
//		int s1 = 1, s2 = 1;
//		if (n == 1 || n == 2)
//			return 1;
//
//		for (size_t i = 3; i <= n; i++)
//		{
//			int iTmp = s2;
//			s2 = s2 + s1;
//			s1 = iTmp;
//		}
//		return s2;
//	}
//};

/******************************************************************************
�������ƣ� jumpFloor	��ָoffer��7��
����˵���� һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������
�� �� ֵ�� int
��    ���� int number
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/01
******************************************************************************/
//class Solution {
//public:
//	int jumpFloor(int number) 
//	{
//		if (number < 1)
//			return 0;
//
//		int s1 = 1, s2 = 2;
//		if (1 == number)
//			return s1;
//		if (2 == number)
//			return s2;
//
//		for (size_t i = 3; i <= number; i++)
//		{
//			s2 += s1;
//			s1 = s2 - s1;
//		}
//		return s2;
//	}
//};

/******************************************************************************
�������ƣ� jumpFloorII	��ָoffer��8��
����˵���� ���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
�� �� ֵ�� int
��    ���� int number
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/01
******************************************************************************/
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number < 1)
//			return 0;
//
//		return pow(2, number - 1);
//	}
//};

/******************************************************************************
�������ƣ� rectCover	��ָoffer��9��
����˵���� ���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
�� �� ֵ�� int
��    ���� int number
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/01
******************************************************************************/
//class Solution {
//public:
//	int rectCover(int number) 
//	{
//		if (number < 1)
//			return 0;
//
//		int s1 = 1, s2 = 2;
//		if (number == 1)
//			return s1;
//		if (number == 2)
//			return s2;
//		for (size_t i = 3; i <= number; i++)
//		{
//			s2 += s1;
//			s1 = s2 - s1;
//		}
//		return s2;
//	}
//};

/******************************************************************************
�������ƣ� NumberOf1	��ָoffer��10��
����˵���� ����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
�� �� ֵ�� int
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/03
******************************************************************************/
//class Solution {
//public:
//	int  NumberOf1(int n)
//	{
//		int num = 0;
//		int flag = 1;
//		while (0 != flag)
//		{
//			if (flag & n)
//				num++;
//
//			flag = flag << 1;
//		}
//		return num;
//	}
//};

/******************************************************************************
�������ƣ� Power	��ָoffer��11��
����˵���� ����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���
�� �� ֵ�� double
��    ���� double base
��    ���� int exponent
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/03
******************************************************************************/
//class Solution {
//public:
//	double Power(double base, int exponent) 
//	{
//		double result = 1.0;
//		int n = 0;
//		if (exponent > 0)
//		{
//			n = exponent;
//		}
//		else if (exponent < 0)
//		{
//			if (base == 0)
//				throw("�Ƿ����㣡");
//
//			n = -exponent;
//		}
//		else
//		{
//			return 1;
//		}
//
//		int flag = 1;
//		double factor = base;
//
//		while (flag)
//		{
//			if (n & flag)
//			{
//				result = result * factor;
//			}
//			factor *= factor;
//			flag = flag << 1;
//		}
//		return exponent > 0 ? result : 1 / result;
//	}
//};

/******************************************************************************
�������ƣ� reOrderArray	��ָoffer��12��
����˵���� ����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
�� �� ֵ�� void
��    ���� vector<int> & array
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/03
******************************************************************************/
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) 
//	{
//		if (array.empty() || array.size() == 1)
//			return;
//		queue<int>evenNum;
//
//		size_t oddIndex = 0;
//		for (size_t i = 0; i < array.size();i++)
//		{
//			if (array[i] & 1 == 1)
//			{
//				array[oddIndex++] = array[i];
//			}
//			else
//			{
//				evenNum.push(array[i]);
//			}
//		}
//		while (!evenNum.empty())
//		{
//			array[oddIndex++] = evenNum.front();
//			evenNum.pop();
//		}
//	}
//};

/******************************************************************************
�������ƣ� FindKthToTail	��ָoffer��13��
����˵���� ����һ����������������е�����k����㡣
�� �� ֵ�� ListNode*
��    ���� ListNode * pListHead
��    ���� unsigned int k
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/03
******************************************************************************/
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
//	{
//		queue<ListNode *>qTmp;
//		while (nullptr != pListHead)
//		{
//			qTmp.push(pListHead);
//			if (qTmp.size() > k)
//				qTmp.pop();
//
//			pListHead = pListHead->next;
//		}
//		return (qTmp.size() == k) ? qTmp.front() : nullptr;
//	}
//};

/******************************************************************************
�������ƣ� Merge	��ָoffer��14��
����˵���� ���������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������
�� �� ֵ�� ListNode*
��    ���� ListNode * pHead1
��    ���� ListNode * pHead2
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/06
******************************************************************************/
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//	{
//		if (pHead1 == nullptr)
//			return pHead2;
//		if (pHead2 == nullptr)
//			return pHead1;
//
//		ListNode* nodeTmp = nullptr;
//		(pHead1->val < pHead2->val) ? (nodeTmp = pHead1, pHead1 = pHead1->next) : (nodeTmp = pHead2, pHead2 = pHead2->next);
//
//		ListNode *rootNode = nodeTmp;
//		while (nullptr != pHead1 && nullptr != pHead2)
//		{
//			if (pHead1->val < pHead2->val)
//			{
//				nodeTmp->next = pHead1;
//				nodeTmp = nodeTmp->next;
//				pHead1 = pHead1->next;
//			}
//			else
//			{
//				nodeTmp->next = pHead2;
//				nodeTmp = nodeTmp->next;
//				pHead2 = pHead2->next;
//			}
//		}
//		if (nullptr != pHead1)
//			nodeTmp->next = pHead1;
//		else
//			nodeTmp->next = pHead2;
//		return rootNode;
//	}
//};

/******************************************************************************
�������ƣ� HasSubtree	��ָoffer��15��
����˵���� �������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
�� �� ֵ�� bool
��    ���� TreeNode * pRoot1
��    ���� TreeNode * pRoot2
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/06
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == nullptr || pRoot2 == nullptr)
//			return false;
//		if (HasSubTree_aux(pRoot1, pRoot2))
//			return true;
//		else
//			return HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
//	}
//
//	bool HasSubTree_aux(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == nullptr)
//			return true;
//		if (pRoot1 == nullptr)
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//		else
//			return HasSubTree_aux(pRoot1->left, pRoot2->left) && HasSubTree_aux(pRoot1->right, pRoot2->right);
//	}
//};

/******************************************************************************
�������ƣ� Mirror	��ָoffer��16��
����˵���� ���������Ķ�����������任ΪԴ�������ľ���
�� �� ֵ�� void
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/06
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot) 
//	{
//		if (nullptr == pRoot)
//			return;
//		
//		swap(pRoot->left, pRoot->right);
//		Mirror(pRoot->left);
//		Mirror(pRoot->right);
//	}
//};

/******************************************************************************
�������ƣ� printMatrix	��ָoffer��17��
����˵���� ����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣�
���磬����������¾��� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 �����δ�ӡ������1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
�� �� ֵ�� vector<int>
��    ���� vector<vector<int> > matrix
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/06
******************************************************************************/
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix)
//	{
//		vector<int>vResult;
//		if (matrix.empty())
//			return vResult;
//
//		size_t rowIndex_max = matrix.size();
//		size_t columnIndex_max = matrix[0].size();
//		size_t rowIndex_min = 0;
//		size_t columnIndex_min = 0;
//
//
//		while (rowIndex_max > rowIndex_min && columnIndex_max > columnIndex_min)
//		{
//			printMatrix_aux(matrix, rowIndex_min++, rowIndex_max--, columnIndex_min++, columnIndex_max--, vResult);
//		}
//		return vResult;
//	}
//
//	void printMatrix_aux(const vector<vector<int>> &matrix, const size_t iMinRow, const size_t iMaxRow, const size_t iMinColumn, const size_t iMaxColumn, vector<int> &vResult)
//	{
//		if (iMinRow >= iMaxRow || iMinColumn >= iMaxColumn)
//			return;
//
//		if (iMaxColumn - iMinColumn > 0)
//		{
//			for (int i = iMinColumn; i < (int)iMaxColumn; i++)
//				vResult.push_back(matrix[iMinRow][i]);
//		}
//
//		if (iMaxRow - iMinRow > 2)
//		{
//			for (int i = iMinRow + 1; i < (int)iMaxRow - 1; ++i)
//				vResult.push_back(matrix[i][iMaxColumn - 1]);
//		}
//
//		if (iMaxColumn - iMinColumn > 0 && iMaxRow - iMinRow > 1)
//		{
//			for (int i = iMaxColumn - 1; i >= (int)iMinColumn;)
//			{
//				vResult.push_back(matrix[iMaxRow - 1][i--]);
//			}
//		}
//
//		if (iMaxRow - iMinRow > 2 && iMaxColumn - iMinColumn > 1)
//		{
//			for (int j = iMaxRow - 2; j > (int)iMinRow; --j)
//				vResult.push_back(matrix[j][iMinColumn]);
//		}
//	}
//};

/******************************************************************************
�������ƣ� push	��ָoffer��18��
����˵���� ����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��СԪ�ص�min������
�� �� ֵ�� void
��    ���� int value
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/06
******************************************************************************/
//class Solution {
//public:
//
//	void push(int value) {
//		m_Stack.push(value);
//		if (m_stack_min.empty())
//			m_stack_min.push(value);
//		else
//			value < m_stack_min.top() ? m_stack_min.push(value) : m_stack_min.push(m_stack_min.top());
//	}
//	void pop() {
//		if (m_Stack.empty())
//			throw("empty");
//		m_Stack.pop();
//		m_stack_min.pop();
//	}
//	int top() {
//		if (m_Stack.empty())
//			throw("empty");
//		return m_Stack.top();
//	}
//	int min() {
//		if (m_Stack.empty())
//			throw("empty");
//		return m_stack_min.top();
//	}
//private:
//	stack<int>m_Stack;
//	stack<int>m_stack_min;
//};

/******************************************************************************
�������ƣ� IsPopOrder	��ָoffer��19��
����˵���� ���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳��
����ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4��5,3,2,1�Ǹ�ѹջ����
��Ӧ��һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�
�� �� ֵ�� bool
��    ���� vector<int> pushV
��    ���� vector<int> popV
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/07
******************************************************************************/
//class Solution {
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV)
//	{
//		if (pushV.size() != popV.size())
//			return false;
//
//		if (pushV.empty())
//			return true;
//
//		auto iter1 = find(pushV.begin(), pushV.end(), popV.front());
//		if (iter1 == pushV.end())
//			return false;
//
//		vector<int>vPushL(pushV.begin(), iter1);
//		vector<int>vPushR(iter1 + 1, pushV.end());
//
//		size_t midIndex = iter1 - pushV.begin();
//		vector<int>vPopL(popV.end() - midIndex, popV.end());
//		vector<int>vPopR(popV.begin() + 1, popV.end() - midIndex);
//
//		if (!isOpposite(vPopL, vPushL))
//			return false;
//
//		return IsPopOrder(vPushR, vPopR);
//	}
//
//	bool isOpposite(vector<int> pushV, vector<int> popV)
//	{
//		if (pushV.size() != popV.size())
//			return false;
//		if (pushV.empty())
//			return true;
//
//		for (size_t i = 0; i < pushV.size(); i++)
//		{
//			if (pushV[i] != popV[pushV.size() - i - 1])
//				return false;
//		}
//		return true;
//	}
//};

/******************************************************************************
�������ƣ� PrintFromTopToBottom		��ָoffer��20��
����˵���� �������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
�� �� ֵ�� vector<int>
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/07
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	vector<int> PrintFromTopToBottom(TreeNode* root)
//	{
//		vector<int>vResult;
//		if (nullptr == root)
//			return vResult;
//
//		queue<TreeNode *>qNodes;
//		qNodes.push(root);
//		while (!qNodes.empty())
//		{
//			TreeNode *nodeTmp = qNodes.front();
//			vResult.push_back(nodeTmp->val);
//			if (nullptr != nodeTmp->left)
//				qNodes.push(nodeTmp->left);
//			if (nullptr != nodeTmp->right)
//				qNodes.push(nodeTmp->right);
//
//			qNodes.pop();
//		}
//		return vResult;
//	}
//};

/******************************************************************************
�������ƣ� VerifySquenceOfBST	��ָoffer��21��
����˵���� ����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes,�������No���������������������������ֶ�������ͬ��
�� �� ֵ�� bool
��    ���� vector<int> sequence
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/07
******************************************************************************/
//class Solution {
//public:
//	bool VerifySquenceOfBST(vector<int> sequence)
//	{
//		if (sequence.empty())
//			return false;
//
//		return VerifySquenceOfBST_aux(sequence, 0, sequence.size());
//	}
//
//	bool VerifySquenceOfBST_aux(const vector<int>&sequence, size_t iBegin, size_t iEnd)
//	{
//		if (iEnd == iBegin)
//			return true;
//
//		int flag = sequence[iEnd - 1];
//		size_t midIndex = iBegin;
//		for (; midIndex < iEnd - 1; midIndex++)
//		{
//			if (sequence[midIndex] > flag)
//				break;
//		}
//
//		for (size_t i = midIndex; i < iEnd - 1; i++)
//		{
//			if (sequence[i] < flag)
//				return false;
//		}
//
//		return VerifySquenceOfBST_aux(sequence, iBegin, midIndex) && VerifySquenceOfBST_aux(sequence, midIndex, iEnd - 1);
//	}
//};

/******************************************************************************
�������ƣ� FindPath ��ָoffer��22��
����˵���� ����һ�Ŷ�������һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
�� �� ֵ�� vector<vector<int> >
��    ���� TreeNode * root
��    ���� int expectNumber
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/07
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
//	{
//		vector<vector<int>>vvResult;
//		if (nullptr == root)
//			return vvResult;
//
//		vector<int>vPreV;
//		int preSum = 0;
//		FindPath_aux(root, vPreV, preSum, expectNumber, vvResult);
//
//		return vvResult;
//	}
//
//	void FindPath_aux(TreeNode *iNode, vector<int>iovPreV, int ivPreSum, int exNum, vector<vector<int>>&iovvResult)
//	{
//		if (iNode == nullptr)
//			return;
//
//		iovPreV.push_back(iNode->val);
//		ivPreSum = ivPreSum + iNode->val;
//
//		if (iNode->left == nullptr && iNode->right == nullptr)
//		{
//			if (ivPreSum == exNum)
//				iovvResult.push_back(iovPreV);
//			return;
//		}
//		if (iNode->left != nullptr)
//		{
//			FindPath_aux(iNode->left, iovPreV, ivPreSum, exNum, iovvResult);
//		}
//		if (iNode->right != nullptr)
//		{
//			FindPath_aux(iNode->right, iovPreV, ivPreSum, exNum, iovvResult);
//		}
//	}
//};

/******************************************************************************
�������ƣ� Clone	��ָoffer��23��
����˵���� ����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬
��һ������ָ��ָ������һ���ڵ㣩�����ؽ��Ϊ���ƺ��������head����ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
�� �� ֵ�� RandomListNode*
��    ���� RandomListNode * pHead
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/15
******************************************************************************/
//struct RandomListNode {
//	int label;
//	struct RandomListNode *next, *random;
//	RandomListNode(int x) :
//		label(x), next(NULL), random(NULL) {
//	}
//};
//class Solution
//{
//public:
//	RandomListNode* Clone(RandomListNode* pHead)
//	{
//		if (pHead == nullptr)
//			return nullptr;
//
//		for (auto nodeTmp = pHead; nodeTmp != nullptr; nodeTmp = nodeTmp->next)
//		{
//			RandomListNode *newNode = new RandomListNode(nodeTmp->label);
//			newNode->next = nodeTmp->next;
//			nodeTmp->next = newNode;
//			nodeTmp = newNode;
//		}
//
//		for (auto nodeTmp = pHead; nodeTmp != nullptr; nodeTmp = nodeTmp->next)
//		{
//			RandomListNode *nextNode = nodeTmp->next;
//			if (nullptr != nodeTmp->random)
//				nextNode->random = nodeTmp->random->next;
//			nodeTmp = nextNode;
//		}
//
//		RandomListNode *pCloneHead = pHead->next;
//		RandomListNode *tmp;
//		RandomListNode *currNode = pHead;
//		while (currNode->next){
//			tmp = currNode->next;
//			currNode->next = tmp->next;
//			currNode = tmp;
//		}
//		return pCloneHead;
//	}
//};

/******************************************************************************
�������ƣ� Convert	��ָoffer��24��
����˵���� ����һ�ö��������������ö���������ת����һ�������˫������Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
�� �� ֵ�� TreeNode*
��    ���� TreeNode * pRootOfTree
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/24
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		if (nullptr == pRootOfTree)
//			return nullptr;
//
//		TreeNode *lNode(nullptr), *rNode(nullptr);
//		Convert_aux(pRootOfTree, lNode, rNode);
//		return lNode;
//	}
//
//	void Convert_aux(TreeNode *ipNode, TreeNode *&iopLNode, TreeNode *&iopRNode)
//	{
//		if (ipNode == nullptr)
//			return;
//		TreeNode *llNodeTmp(nullptr), *lrNodeTmp(nullptr), *rlNodeTmp(nullptr), *rrNodeTmp(nullptr);
//		TreeNode *lNode = ipNode->left;
//		TreeNode *rNode = ipNode->right;
//
//		if (lNode != nullptr)
//		{
//			Convert_aux(lNode, llNodeTmp, lrNodeTmp);
//			iopLNode = llNodeTmp;
//			lrNodeTmp->right = ipNode;
//			ipNode->left = lrNodeTmp;
//		}
//		else
//		{
//			iopLNode = ipNode;
//		}
//		if (rNode != nullptr)
//		{
//			Convert_aux(rNode, rlNodeTmp, rrNodeTmp);
//			iopRNode = rrNodeTmp;
//			rlNodeTmp->left = ipNode;
//			ipNode->right = rlNodeTmp;
//		}
//		else
//		{
//			iopRNode = ipNode;
//		}
//	}
//};

/******************************************************************************
�������ƣ� Permutation	��ָoffer��25��
����˵���� ����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
�� �� ֵ�� vector<string>
��    ���� string str
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/27
******************************************************************************/
//class Solution {
//public:
//	vector<string> Permutation(string str)
//	{
//		vector<string>vResult;
//		if (str.empty())
//			return vResult;
//
//		set<string>sStr;
//		Permutation_aux(str, 0, sStr);
//
//		copy(sStr.begin(), sStr.end(), back_inserter(vResult));
//		return vResult;
//	}
//
//	void Permutation_aux(string iStr, const size_t &iSize, set<string>&ioResult)
//	{
//		if (iSize >= iStr.size())
//			return;
//		if (iSize == iStr.size() - 1)
//		{
//			ioResult.insert(iStr);
//			return;
//		}
//
//		ioResult.insert(iStr);
//
//		for (size_t i = iSize; i < iStr.size(); i++)
//		{
//			if (i == iSize || iStr[i] != iStr[iSize])
//			{
//				swap(iStr[i], iStr[iSize]);
//				Permutation_aux(iStr, iSize + 1, ioResult);
//				swap(iStr[i], iStr[iSize]);
//			}
//		}
//	}
//};

/******************************************************************************
�������ƣ� MoreThanHalfNum_Solution		��ָoffer��26��
����˵���� ��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}����������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
�� �� ֵ�� int
��    ���� vector<int> numbers
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/27
******************************************************************************/
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) 
//	{
//		if (numbers.empty())
//			throw("empty");
//
//		int flag = 0;
//		size_t flagTime = 0;
//		for (size_t i = 0; i < numbers.size(); i++)
//		{
//			if (flagTime == 0)
//			{
//				flag = numbers[i];
//				flagTime++;
//			}
//			else
//			{
//				if (numbers[i] == flag)
//				{
//					flagTime++;
//				}
//				else
//				{
//					if ((--flagTime) == 0)
//						flag = 0;
//				}
//			}
//		}
//		
//		size_t totalTime = 0;
//		for (size_t i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] == flag)
//				totalTime++;
//		}
//
//		if (totalTime > numbers.size() / 2)
//			return flag;
//		else
//			return 0;
//	}
//};

/******************************************************************************
�������ƣ� GetLeastNumbers_Solution		��ָoffer��27��
����˵���� ����n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��
�� �� ֵ�� vector<int>
��    ���� vector<int> input
��    ���� int k
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/27
******************************************************************************/
//class Solution {
//public:
//
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
//	{
//		vector<int>vResult;
//		if (input.empty() || k < 1 || k > input.size())
//			return vResult;
//		
//		if (k == input.size())
//			return input;
//
//		for (size_t i = 0; i < k; i++)
//		{
//			vResult.push_back(input[i]);
//		}
//
//		make_heap(vResult.begin(), vResult.end());
//		for (size_t i = k; i < input.size(); i++)
//		{
//			if (input[i] < vResult[0])
//			{
//				pop_heap(vResult.begin(), vResult.end());
//				vResult.pop_back();
//
//				vResult.push_back(input[i]);
//				push_heap(vResult.begin(), vResult.end());
//			}
//		}
//		return vResult;
//	}
//};

/******************************************************************************
�������ƣ� FindGreatestSumOfSubArray	��ָoffer��28��
����˵���� HZż������Щרҵ������������Щ�Ǽ����רҵ��ͬѧ����������鿪����,���ַ�����:
�ڹ��ϵ�һάģʽʶ����,������Ҫ��������������������,������ȫΪ������ʱ��,����ܺý��������
,��������а�������,�Ƿ�Ӧ�ð���ĳ������,�������Աߵ��������ֲ����أ�����:{6,-3,-2,7,-15,1,2,2}
,����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)����᲻�ᱻ������ס��(�������ĳ���������1)
�� �� ֵ�� int
��    ���� vector<int> array
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/27
******************************************************************************/
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) 
//	{
//		if (array.empty())
//			return 0;
//		int maxTmp = array[0], iResult = array[0];
//		for (size_t i = 1; i < array.size(); i++)
//		{
//			int sumTmp = maxTmp + array[i];
//			if (sumTmp > 0)
//				maxTmp = sumTmp;
//			else
//				maxTmp = 0;
//
//			if (iResult < sumTmp)
//				iResult = sumTmp;
//		}
//		return iResult;
//	}
//};

/******************************************************************************
�������ƣ� NumberOf1Between1AndN_Solution	��ָoffer��29��
����˵���� ���1~13��������1���ֵĴ���,�����100~1300��������1���ֵĴ�����Ϊ�����ر�����һ��1~13�а���1������
��1��10��11��12��13��˹�����6��,���Ƕ��ں�����������û���ˡ�ACMerϣ�����ǰ����,������������ձ黯,���Ժܿ���������Ǹ�����������1���ֵĴ�����
�� �� ֵ�� int
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/28
******************************************************************************/
//class Solution {
//public:
//	int NumberOf1Between1AndN_Solution(int n)
//	{
//		if (n < 1)
//			return 0;
//
//		int m = log10(n) + 1;	//n��λ��
//
//		int nLeft = 0;	//��׼����ֵ
//		int nRight = n;	//��׼�Ҳ��ֵ
//		int k = 0;		//��׼��ֵ
//
//		int result = 0;
//		for (size_t i = m; i > 0; i--)
//		{
//			nLeft = 10 * nLeft + k;
//			k = nRight / (int)pow(10, i - 1);
//			nRight = nRight % (int)pow(10, i - 1);
//
//			result += (nLeft * pow(10, i - 1));
//			if (k == 1)
//				result += (nRight + 1);
//			else if (k > 1)
//				result += pow(10, i - 1);
//		}
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� PrintMinNumber	��ָoffer��30��
����˵���� ����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��
�� �� ֵ�� std::string
��    ���� vector<int> numbers
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/28
******************************************************************************/
// class Solution {
// public:
// 	string PrintMinNumber(vector<int> numbers)
// 	{
// 		//��������
// // 		string result;
// // 
// // 		int size = numbers.size();
// // 		if (0 == size)
// // 			return result;
// // 
// // 		if (1 == size)
// // 		{
// // 			result = to_string(numbers[0]);
// // 			return result;
// // 		}
// // 
// // 		vector<int>vToolNum = { numbers[0] };
// // 		vector<int>vNumBat = { (int)(log10(numbers[0]) + 1) };
// // 		for (size_t i = 1; i < size; i++)
// // 		{
// // 			vToolNum.push_back(numbers[i]);
// // 			vNumBat.push_back((int)(log10(numbers[i]) + 1));
// // 
// // 			for (size_t j = i; j > 0; j--)
// // 			{
// // 				if (vToolNum[j - 1] * (pow(10, vNumBat[j]) - 1) > vToolNum[j] * (pow(10, vNumBat[j - 1]) - 1))
// // 				{
// // 					swap(vToolNum[j - 1], vToolNum[j]);
// // 					swap(vNumBat[j - 1], vNumBat[j]);
// // 					continue;
// // 				}
// // 				break;
// // 			}
// // 		}
// // 
// // 		for (auto singleInt : vToolNum)
// // 		{
// // 			result += to_string(singleInt);
// // 		}
// // 
// // 		return result;
// 
// 		//sort
// 		sort(numbers.begin(), numbers.end(), compare);
// 
// 		string result;
// 		for (auto singleInt : numbers)
// 		{
// 			result += to_string(singleInt);
// 		}
// 		return result;
// 	}
// 
// // 	static bool compare(const int &num1, const int &num2)
// // 	{
// // 		string strA = to_string(num1);
// // 		string strB = to_string(num2);
// // 
// // 		return (strA + strB) < (strB + strA);
// // 	}
// };

/******************************************************************************
�������ƣ� GetUglyNumber_Solution	��ָoffer��31��
����˵���� ��ֻ��������2��3��5��������������Ugly Number��������6��8���ǳ�������14���ǣ���Ϊ����������7��
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������
�� �� ֵ�� int
��    ���� int index
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/28
******************************************************************************/
//class Solution {
//public:
//	int GetUglyNumber_Solution(int index)
//	{
//		if (index < 1)
//			return 0;
//
//		vector<int>vUglyNums = { 1 };
//		int index2 = 0, index3 = 0, index5 = 0;
//
//		int num2 = vUglyNums[index2] * 2;
//		int num3 = vUglyNums[index3] * 3;
//		int num5 = vUglyNums[index5] * 5;
//
//		while (vUglyNums.size() < index)
//		{
//			int numTmp = 0;
//			bool b2 = false, b3 = false, b5 = false;
//			if (num2 <= num3 && num2 <= num5)
//			{
//				numTmp = num2;
//				b2 = true;
//				index2++;
//			}
//
//			if (num3 <= num2 && num3 <= num5)
//			{
//				numTmp = num3;
//				b3 = true;
//				index3++;
//			}
//
//			if (num5 <= num2 && num5 <= num3)
//			{
//				numTmp = num5;
//				b5 = true;
//				index5++;
//			}
//
//			vUglyNums.push_back(numTmp);
//			if (b2)
//				num2 = vUglyNums[index2] * 2;
//			if (b3)
//				num3 = vUglyNums[index3] * 3;
//			if (b5)
//				num5 = vUglyNums[index5] * 5;
//		}
//		return vUglyNums.back();
//	}
//}; 

/******************************************************************************
�������ƣ� FirstNotRepeatingChar	��ָoffer��32��
����˵���� ��һ���ַ���(1<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,����������λ��
�� �� ֵ�� int
��    ���� string str
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/28
******************************************************************************/
//class Solution {
//public:
//	int FirstNotRepeatingChar(string str)
//	{
//		if (str.empty())
//			return -1;
//
//		vector<char>vOrder;
//		vector<int>vTimes;
//		for (size_t j = 0; j < str.size(); j++)
//		{
//			auto iter1 = find(vOrder.begin(), vOrder.end(), str[j]);
//			if (iter1 == vOrder.end())
//			{
//				vOrder.push_back(str[j]);
//				vTimes.push_back(j);
//			}
//			else
//			{
//				size_t sizeTmp = iter1 - vOrder.begin();
//				vTimes[sizeTmp] = -1;
//			}
//		}
//
//		for (size_t i = 0; i < vTimes.size(); i++)
//		{
//			if (vTimes[i] != -1)
//				return vTimes[i];
//		}
//		return -1;
//	}
//};

/******************************************************************************
�������ƣ� InversePairs		��ָoffer��33��
����˵���� �������е��������֣����ǰ��һ�����ִ��ں�������֣����������������һ������ԡ�����һ������,�����������е�����Ե�����P��
����P��1000000007ȡģ�Ľ������� �����P%1000000007
�� �� ֵ�� int
��    ���� vector<int> data
��    �ߣ� Cheng Deng
��    �ڣ� 2017/11/29
******************************************************************************/
//class Solution {
//public:
//	int InversePairs(vector<int> data)
//	{
//		int size = data.size();
//		m_vHelpVec.resize(data.size());
//
//		MergeOrder(data, 0, size);
//
//		return m_pairSize;
//	}
//
//	void Merge(vector<int>&vData, int begin, int mid, int end)
//	{
//		int i = begin, j = mid, k = begin;
//		for (; i < mid && j < end; k++)
//		{
//			if (vData[i] > vData[j])
//			{
//				m_pairSize += (mid - i);
//				m_vHelpVec[k] = vData[j++];
//			}
//			else
//				m_vHelpVec[k] = vData[i++];
//		}
//		if (i == mid)
//		for (size_t a = j; a < end; a++)
//			m_vHelpVec[k++] = vData[a];
//		else
//		for (size_t b = i; b < mid; b++)
//			m_vHelpVec[k++] = vData[b];
//
//		for (size_t t = begin; t < end; t++)
//		{
//			vData[t] = m_vHelpVec[t];
//		}
//	}
//
//	void MergeOrder(vector<int>&vData, int begin, int end)
//	{
//		if (begin < end - 1)
//		{
//			int mid = (begin + end) / 2;
//			MergeOrder(vData, begin, mid);
//			MergeOrder(vData, mid, end);
//			Merge(vData, begin, mid, end);
//		}
//	}
//
//	long long m_pairSize = 0;
//	vector<int>m_vHelpVec;
//};

/******************************************************************************
�������ƣ� FindFirstCommonNode	ţ������34��
����˵���� �������������ҳ����ǵĵ�һ��������㡣
�� �� ֵ�� ListNode*
��    ���� ListNode * pHead1
��    ���� ListNode * pHead2
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/08
******************************************************************************/
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) 
//	{
//		ListNode *p1 = pHead1;
//		ListNode *p2 = pHead2;
//		while (p1 != p2){
//			if (p1 == nullptr)
//				p1 = pHead2;
//			p1 = (p1 == NULL ? pHead2 : p1->next);
//			p2 = (p2 == NULL ? pHead1 : p2->next);
//		}
//		return p1;
//	}
//};

/******************************************************************************
�������ƣ� GetNumberOfK	��ָoffer��35��
����˵���� ͳ��һ�����������������г��ֵĴ�����
�� �� ֵ�� int
��    ���� vector<int> data
��    ���� int k
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/09
******************************************************************************/
//class Solution {
//public:
//	int GetNumberOfK(vector<int> data, int k)
//	{
//		if (data.empty())
//			return 0;
//
//		int orderType = 0;		//����Ϊ1������Ϊ-1
//		if (data.back() == data.front())
//		{
//			if (data.back() == k)
//				return data.size();
//			else
//				return 0;
//		}
//
//		data.front() < data.back() ? orderType = 1 : orderType = -1;
//
//		size_t first = -1, last = -1;		//��ʼ��ֹλ��
//
//		int status = FindFirstLastK(data, k, first, last, orderType);
//
//		if (status == -1)
//			return 0;
//		else
//			return last - first + 1;
//	}
//
//	//�������������еĵ�һ�������һ��kֵ���ڵ�λ��
//	int FindFirstLastK(vector<int>data, int k, size_t &first, size_t &last, int orderType/*1��ʾ����-1��ʾ����*/)
//	{
//		size_t begin = 0;
//		size_t end = data.size() - 1;
//		size_t mid = (begin + end) / 2;
//
//		while (begin < end - 1 && data[begin] != k)
//		{
//			if (orderType == 1)
//			{
//				if (data[mid] >= k)
//					end = mid;
//				else
//					begin = mid;
//				mid = (begin + end) / 2;
//			}
//			else if (orderType == -1)
//			{
//				if (data[mid] <= k)
//					end = mid;
//				else
//					begin = mid;
//				mid = (begin + end + 1) / 2;
//			}
//		}
//		if (data[begin] == k)
//			first = begin;
//		else if (data[end] == k)
//			first = end;
//		else
//			return -1;
//
//		end = data.size() - 1;
//		mid = (begin + end) / 2;
//		while (begin < end - 1 && data[end] != k)
//		{
//			if (orderType == 1)
//			{
//				if (data[mid] <= k)
//					begin = mid;
//				else
//					end = mid;
//				mid = (begin + end) / 2;
//			}
//			else if (orderType == -1)
//			{
//				if (data[mid] >= k)
//					begin = mid;
//				else
//					begin = mid;
//				mid = (begin + end + 1) / 2;
//			}
//		}
//		if (data[end] == k)
//			last = end;
//		else if (data[begin] == k)
//			last = begin;
//		else
//			return -1;
//
//		return 0;
//	}
//};

/******************************************************************************
�������ƣ� TreeDepth	��ָoffer��36��
����˵���� ����һ�ö����������������ȡ��Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�
�� �� ֵ�� int
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/09
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		//�ݹ鷽ʽ
//// 		if (pRoot == nullptr)
//// 			return 0;
//// 
//// 		int lDepth = TreeDepth(pRoot->left);
//// 		int rDepth = TreeDepth(pRoot->right);
//// 
//// 		return 1 + max(lDepth, rDepth);
//
//		//ѭ����ʽ
//// 		int result = 0;
//// 		if (pRoot == nullptr)
//// 			return 0;
//// 
//// 		queue<TreeNode *>qNodes;
//// 		qNodes.push(pRoot);
//// 		while (!qNodes.empty())
//// 		{
//// 			result++;
//// 			size_t size = qNodes.size();
//// 			for (size_t i = 0; i < qNodes.size(); i++)
//// 			{
//// 				TreeNode *nodeTmp = qNodes.front();
//// 				qNodes.pop();
//// 				if (nodeTmp->left != nullptr)
//// 					qNodes.push(nodeTmp->left);
//// 				if (nodeTmp->right != nullptr)
//// 					qNodes.push(nodeTmp->right);
//// 			}
//// 		}
//// 		return result;
//	}
//};

/******************************************************************************
�������ƣ� IsBalanced_Solution	��ָoffer��37��
����˵���� ����һ�ö��������жϸö������Ƿ���ƽ���������
�� �� ֵ�� bool
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/09
******************************************************************************/
// struct TreeNode {
// 	int val;
// 	struct TreeNode *left;
// 	struct TreeNode *right;
// 	TreeNode(int x) :
// 		val(x), left(NULL), right(NULL) {
// 	}
// };
// class Solution {
// public:
// 
// 	bool IsBalanced_Solution(TreeNode* pRoot) 
// 	{
// 		if (pRoot == nullptr)
// 			return true;
// 
// 		size_t lDepth = 0, rDepth = 0;
// 		return IsBalanced_Solution_Help(pRoot, lDepth, rDepth);
// 	}
// 
// 	bool IsBalanced_Solution_Help(TreeNode* pRoot, size_t &lDepth, size_t &rDepth)
// 	{
// 		if (pRoot == nullptr)
// 			return true;
// 
// 		size_t llDepth = 0, rlDepth = 0, lrDepth = 0, rrDepth = 0;
// 		bool lBlance = IsBalanced_Solution_Help(pRoot->left, llDepth, rlDepth);
// 		if (lBlance == false)
// 			return false;
// 
// 		bool rBlance = IsBalanced_Solution_Help(pRoot->right, lrDepth, rrDepth);
// 		if (rBlance == false)
// 			return false;
// 		
// 		lDepth = max(llDepth, rlDepth);
// 		rDepth = max(lrDepth, rrDepth);
// 
// 		if (abs((double)lDepth - rDepth) > 1)
// 			return false;
// 
// 		lDepth++, rDepth++;
// 		return true;
// 	}
// };

/******************************************************************************
�������ƣ� FindNumsAppearOnce	��ָoffer��38��
����˵���� һ�����������������������֮�⣬���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�
�� �� ֵ�� void
��    ���� vector<int> data
��    ���� int * num1
��    ���� int * num2
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/09
******************************************************************************/
// class Solution {
// public:
// 	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
// 	{
// 		//map
// 		// 		if (data.size() < 2)
// 		// 			return;
// 		// 
// 		// 		map<int, int>mNumToTimes;
// 		// 		for (size_t i = 0; i < data.size(); i++)
// 		// 			mNumToTimes[data[i]]++;
// 		// 
// 		// 		vector<int>result;
// 		// 		for (auto singleMap : mNumToTimes)
// 		// 		{
// 		// 			if (singleMap.second == 1)
// 		// 				result.push_back(singleMap.first);
// 		// 		}
// 		// 
// 		// 		if (result.size() != 2)
// 		// 			return;
// 		// 
// 		// 		*num1 = result[0];
// 		// 		*num2 = result[1];
// 
// 		//�������
// 		int xor_num = 0;
// 		for (size_t i = 0; i < data.size(); i++)
// 			xor_num = xor_num^data[i];
// 
// 		////���ҵ�һ��Ϊ1��λ��
// 		int index = 0;
// 		while (true)
// 		{
// 			if ((xor_num >> index) & 0x01 != 0)
// 				break;
// 
// 			index++;
// 		}
// 
// 		for (size_t j = 0; j < data.size(); j++)
// 		{
// 			if ((data[j] >> index) & 0x01 != 0)
// 				*num1 = (*num1) ^ data[j];
// 			else
// 				*num2 = (*num2) ^ data[j];
// 		}
// 	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
// };

/******************************************************************************
�������ƣ� FindContinuousSequence	��ָoffer��39��
����˵���� С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,�����Ͼ�д������ȷ����100��
���������������ڴ�,�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��û���,���͵õ���һ����
��������Ϊ100������:18,19,20,21,22�����ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
�� �� ֵ�� vector<vector<int> >
��    ���� int sum
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	vector<vector<int> > FindContinuousSequence(int sum) 
//	{
//		vector<vector<int>>vResult;
//		if (sum < 1)
//			return vResult;
//
//		int sum2 = sum << 1;
//		for (int i = 2; i <= sum;i++)
//		{
//			if (sum2 % i == 0)
//			{
//				int add1 = sum2 / i;
//				if (2 * add1 < i + 1 || 2 * add1 < 2 * i - 2 || !((add1 - i) & 0x01))
//					continue;
//
//				int x1 = (add1 - i - 1) >> 1;
//				vector<int>vTmp;
//				for (size_t j = 0; j < i; j++)
//					vTmp.push_back(x1 + j);
//				
//				vResult.push_back(vTmp);
//			}
//		}
//		return vResult;
//	}
//};

/******************************************************************************
�������ƣ� FindNumbersWithSum	��ָoffer��40��
����˵���� ����һ����������������һ������S���������в������������ǵ����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
�� �� ֵ�� vector<int>
��    ���� vector<int> array
��    ���� int sum
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	vector<int> FindNumbersWithSum(vector<int> array, int sum)
//	{
//		vector<int>result;
//		if (array.size() < 2)
//			return result;
//
//		int minIndex = -1, maxIndex = array.size();
//
//		for (size_t begin = 0, end = array.size() - 1; begin < end;)
//		{
//			if (array[begin] + array[end] == sum)
//			{
//				minIndex = begin;
//				maxIndex = end;
//				break;
//			}
//			else if (array[begin] + array[end] < sum)
//				begin++;
//			else
//				end--;
//		}
//
//		if (minIndex != -1)
//		{
//			result.push_back(array[minIndex]);
//			result.push_back(array[maxIndex]);
//		}
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� LeftRotateString		��ָoffer��41��
����˵���� �����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ�����������
����һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����
�� �� ֵ�� std::string
��    ���� string str
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	string LeftRotateString(string str, int n) 
//	{
//		string result;
//		if (str.empty())
//			return str;
//		if (n < 0)
//			throw("n is less than 0");
//
//		size_t size = str.size();
//		int moveN = n % size;
//
//		result = string(str.begin() + moveN, str.end()) + string(str.begin(), str.begin() + moveN);
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� ReverseSentence	��ָoffer��42��
����˵���� ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ��
��һ������Fish������������ȴ������������˼�����磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
�� �� ֵ�� std::string
��    ���� string str
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	string ReverseSentence(string str)
//	{
//		string result;
//		if (str.empty())
//			return str;
//
//		auto blankPos = str.rbegin(), iter1 = blankPos;
//		while (iter1 != str.rend())
//		{
//			if (*iter1 == ' ')
//			{
//				if (blankPos != str.rbegin())
//					result += ' ';
//
//				string strTmp(blankPos, iter1);
//				result += string(strTmp.rbegin(), strTmp.rend());
//
//				blankPos = iter1 + 1;
//			}
//			iter1++;
//		}
//
//		if (blankPos != str.rbegin())
//			result += ' ';
//
//		string strTmp(blankPos, iter1);
//		result += string(strTmp.rbegin(), strTmp.rend());
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� IsContinuous		��ָoffer��43��
����˵���� LL���������ر��,��Ϊ��ȥ����һ���˿���,���������Ȼ��2������,2��С��(һ����ԭ����54��^_^)...��������г����5����,
�����Լ�������,�����ܲ��ܳ鵽˳��,����鵽�Ļ�,������ȥ��������Ʊ,�ٺ٣���������A,����3,С��,����,��Ƭ5��,��Oh My God!������
˳��.....LL��������,��������,������\С �����Կ����κ�����,����A����1,JΪ11,QΪ12,KΪ13�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��
(��С���ֱ���2��4),��So Lucky!����LL����ȥ��������Ʊ���� ����,Ҫ����ʹ�������ģ������Ĺ���,Ȼ���������LL��������Ρ�Ϊ�˷�
�����,�������Ϊ��С����0��
�� �� ֵ�� bool
��    ���� vector<int> numbers
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers)
//	{
//		if (numbers.size() > 13 || numbers.empty())
//			return false;
//
//		int zeroSize = 0, numSize = 0, numTmp = 1;
//		int minIndex = 14, maxIndex = 0;
//		for (auto singleNum : numbers)
//		{
//			if (singleNum == 0)
//				zeroSize++;
//			else
//			{
//				if (numSize & (numTmp << (singleNum - 1)))
//					return false;
//
//				numSize = (numSize | (numTmp << (singleNum - 1)));
//
//				if (singleNum < minIndex)
//					minIndex = singleNum;
//				else if (singleNum > maxIndex)
//					maxIndex = singleNum;
//			}
//		}
//		if (maxIndex - minIndex - (int)numbers.size() < 0)
//			return true;
//		return false;
//	}
//};

/******************************************************************************
�������ƣ� LastRemaining_Solution	��ָoffer44��
����˵���� ÿ����һ��ͯ��,ţ�Ͷ���׼��һЩС����ȥ�����¶�Ժ��С����,����������ˡ�HF��Ϊţ�͵�����Ԫ��,��ȻҲ׼����һЩС��Ϸ��
����,�и���Ϸ��������:����,��С������Χ��һ����Ȧ��Ȼ��,�����ָ��һ����m,�ñ��Ϊ0��С���ѿ�ʼ������ÿ�κ���m-1���Ǹ�С����Ҫ��
�г��׸�,Ȼ���������Ʒ�����������ѡ����,���Ҳ��ٻص�Ȧ��,��������һ��С���ѿ�ʼ,����0...m-1����....������ȥ....ֱ��ʣ�����
һ��С����,���Բ��ñ���,�����õ�ţ������ġ�����̽���ϡ���ذ�(��������Ŷ!!^_^)��������������,�ĸ�С���ѻ�õ������Ʒ�أ�(ע��
С���ѵı���Ǵ�0��n-1)
�� �� ֵ�� int
��    ���� int n
��    ���� int m
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		//ѭ��������
//		//if (n < 1 || m < 1)
//		//	return -1;
//		//vector<int>status(n);
//		//int num1 = 0;		//��������
//		//int numIndex = -1;	//��������Ա���
//		//while (num1 < n)
//		//{
//		//	int numIndexTmp = numIndex;		//��ʼ���λ��
//		//	for (int i = 0; i < m;)
//		//	{
//		//		numIndexTmp = (++numIndexTmp) % n;
//		//		if (numIndexTmp < 0 || numIndexTmp >= n)
//		//			return -1;
//		//		if (status[numIndexTmp] == 0)
//		//			i++;
//		//	}
//		//	if (numIndexTmp < 0 || numIndexTmp >= n)
//		//		return -1;
//		//	status[numIndexTmp] = 1;
//		//	numIndex = numIndexTmp;
//		//	num1++;
//		//}
//		//return numIndex;
//
//		//���Ʒ�
//		if (m < 0 || n < 0)
//			return -1;
//
//		int result = 0;
//		for (size_t i = 2; i <= n; ++i)
//			result = (result + m) % i;
//
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� Sum_Solution		��ָoffer45��
����˵���� ��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
�� �� ֵ�� int
��    ���� int n
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/12
******************************************************************************/
//class ClassA
//{
//public:
//	ClassA()
//	{
//		m_index++;
//		m_sum = m_sum + m_index;
//	}
//	static int m_index;
//	static int m_sum;
//};
//
//int ClassA::m_index = 0;
//int ClassA::m_sum = 0;
//
////////////////////////////////////////////////////////////////////////////
////�麯��
//class ClassB;
//ClassB *arrayB[2];;
//
//class ClassB
//{
//public:
//	virtual int fun1(int n)
//	{
//		return 0;
//	}
//};
//
//class ClassC : public ClassB
//{
//public:
//	virtual int fun1(int n)
//	{
//		return n + arrayB[!!n]->fun1(n - 1);
//	}
//};
////�麯��
////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////
////����ָ��
//typedef int (*fun1)(int);
//
//fun1 funTmp[2];
//
//int fun_help(int n)
//{
//	return 0;
//}
//
//int fun_sum(int n)
//{
//	return n + funTmp[!!n](n - 1);
//}
//
////����ָ��
////////////////////////////////////////////////////////////////////////////
//class Solution {
//public:
//	int Sum_Solution(int n)
//	{
//		//���캯��
//		//vector<ClassA>vA(n);
//
//		//return ClassA::m_sum;
//
//		//�麯��
//		//ClassB b1;
//		//ClassC c1;
//		//arrayB[0] = &b1;
//		//arrayB[1] = &c1;
//		//int sum = arrayB[1]->fun1(n);
//		//return sum;
//
//		//����ָ��
//		//funTmp[0] = fun_help;
//		//funTmp[1] = fun_sum;
//
//		//return fun_sum(n);
//	}
//};

/******************************************************************************
�������ƣ� Add	��ָoffer46��
����˵���� дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�
�� �� ֵ�� int
��    ���� int num1
��    ���� int num2
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/12
******************************************************************************/
//class Solution {
//public:
//
//	int Add(int num1, int num2)
//	{
//		int sum, carry;
//		do
//		{
//			sum = num1 ^ num2;
//			carry = (num1 & num2) << 1;
//
//			num1 = carry;
//			num2 = sum;
//		} while (num1 != 0);
//		return sum;
//	}
//};

/******************************************************************************
�������ƣ� StrToInt		��ָoffer��47��
����˵���� ��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
�� �� ֵ�� int
��    ���� string str
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/13
******************************************************************************/
//class Solution {
//public:
//	int StrToInt(string str)
//	{
//		if (str.empty())
//			return 0;
//
//		int result = 0, flag = 1;
//		for (size_t i = 0; i < str.size(); i++)
//		{
//			if (i == 0)
//			{
//				if (str[0] == '-')
//				{
//					flag = -1;
//					continue;
//				}
//				else if (str[0] == '+')
//					continue;
//			}
//
//			if (str[i] >= '0' && str[i] <= '9')
//				result = result * 10 + (str[i] - '0');
//			else
//				return 0;
//		}
//		return result * flag;
//	}
//};

/******************************************************************************
�������ƣ� duplicate	��ָoffer48��
����˵������һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ� ������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡� ���磬������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ������ǵ�һ���ظ�������2��
�� �� ֵ�� bool
��    ���� int numbers[]
��    ���� int length
��    ���� int * duplication
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/16
******************************************************************************/
//class Solution {
//public:
//	// Parameters:
//	//        numbers:     an array of integers
//	//        length:      the length of array numbers
//	//        duplication: (Output) the duplicated number in the array number
//	// Return value:       true if the input is valid, and there are some duplications in the array number
//	//                     otherwise false
//	bool duplicate(int numbers[], int length, int* duplication)
//	{
//		//�������鷨
//		//if (length < 0)
//		//	return false;
//
//		//bool *numSize = new bool[length];
//		//for (size_t i = 0; i < length; i++)
//		//	numSize[i] = false;
//
//		//for (size_t j = 0; j < length; j++)
//		//{
//		//	if (numSize[numbers[j]] == false)
//		//		numSize[numbers[j]] = true;
//		//	else
//		//	{
//		//		*duplication = numbers[j];
//		//		return true;
//		//	}
//		//}
//		//return false;
//
//		//�����鱾��������
//		//for (int i = 0; i < length; i++)
//		//{
//		//	int index = numbers[i];
//		//	if (index >= length) {
//		//		index -= length;
//		//	}
//		//	if (numbers[index] >= length)
//		//	{
//		//		*duplication = numbers[index] - length;
//		//		return true;
//		//	}
//		//	numbers[index] = numbers[index] + length;
//		//}
//		//return false;
//	}
//};

/******************************************************************************
�������ƣ� multiply		ţ����49��m
����˵���� ����һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],����B�е�Ԫ��B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó�����
�� �� ֵ�� vector<int>
��    ���� const vector<int> & A
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/16
******************************************************************************/
//class Solution 
//{
//public:
//	vector<int> multiply(const vector<int>& A)
//	{
//		vector<int>vResult(A.size());
//		for (int i = 0; i < A.size(); i++)
//		{
//			if (i == 0)
//				vResult[i] = 1;
//			else
//				vResult[i] = vResult[i - 1] * A[i - 1];
//		}
//
//		vector<int>vRight(A.size());
//		for (int i = A.size() - 1; i >= 0; i--)
//		{
//			if (i == (A.size() - 1))
//				vRight[i] = 1;
//			else
//				vRight[i] = vRight[i + 1] * A[i + 1];
//		}
//
//		for (size_t i = 0; i < A.size(); i++)
//		{
//			vResult[i] *= vRight[i];
//		}
//
//		return vResult;
//	}
//};

/******************************************************************************
�������ƣ� match	ţ����50��
����˵���� ��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ���
�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ�����磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��
�� �� ֵ�� bool
��    ���� char * str
��    ���� char * pattern
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/22
******************************************************************************/
//class Solution {
//public:
//	bool match(char* str, char* pattern)
//	{
//		if (str == nullptr || pattern == nullptr)
//			return false;
//		return match_help(str, pattern);
//	}
//
//	bool match_help(char* str, char* pattern)
//	{
//		/*����˼·��
//		1������ڶ����ַ���Ϊ*
//			1�������һ���ַ�ƥ�䣬�ݹ�str + 1�� pattern + 1;
//			2�������һ���ַ���ƥ�䣬����false��
//		2������ڶ����ַ�Ϊ*
//			1��~*ƥ��գ��ݹ�str��pattern + 2;
//			2�������һ���ַ���ƥ�䣬���ؿգ������һ���ַ�ƥ�䣬���������
//				1��~*ƥ���һ���ַ����ݹ�str + 1, pattern + 2;
//				2��~*ƥ�����ַ����ݹ�str + 1, pattern;
//		�ؼ��㣺
//		���򷵻���������֤���鲻Խ�磻
//			*/
//		if (*str == '\0' && *pattern == '\0')
//			return true;
//		if (*str != '\0' && *pattern == '\0')
//			return false;
//		if (*pattern == '*')
//			return false;
//
//		if (*(pattern + 1) != '*')
//		{
//			if (*str == *pattern || (*pattern == '.' && *str != '\0'))
//				return match_help(str + 1, pattern + 1);
//			else
//				return false;
//		}
//		else
//		{
//			bool b1 = false, b2 = false, b3 = false;
//			b1 = match_help(str, pattern + 2);
//			if (*str == *pattern || (*pattern == '.' && *str != '\0'))
//			{
//				b2 = match_help(str + 1, pattern + 2);
//				b3 = match_help(str + 1, pattern);
//			}
//			return b1 || b2 || b3;
//		}
//		return false;
//	}
//};

/******************************************************************************
�������ƣ� isNumeric	ţ����51��
����˵���� ��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С���������磬�ַ���"+100","5e2","-123","3.1416"��"-1E-16"����ʾ��ֵ��
����"12e","1a3.14","1.2.3","+-5"��"12e+4.3"�����ǡ�
�� �� ֵ�� bool
��    ���� char * string
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/25
******************************************************************************/
//class Solution {
//public:
//	bool isNumeric(char* string)
//	{
//		if (string == nullptr || *string == '\0')
//			return false;
//
//		if (*string == '+' || *string == '-')
//		{
//			if (*(string + 1) == '\0')
//				return false;
//			else
//				return isNumeric_Core(string + 1);
//		}
//		else
//			return isNumeric_Core(string);
//	}
//	//�ж��Ƿ����޷���������
//	bool isNumeric_Core(char* string)
//	{
//		if (string == nullptr)
//			return false;
//		if (*string == '\0')
//			return true;
//
//		if (*string == '.')
//			return isPureNumWithOutPoint(string + 1);
//		else if (*string >= '0' && *string <= '9')
//		{
//			if (*(string + 1) == '.')
//				return isPureNumWithOutPoint(string + 2);
//			else
//				return isNumeric_Core(string + 1);
//		}
//		else if (*string == 'e' || *string == 'E')
//			return isIntNum(string + 1);
//		else
//			return false;
//	}
//
//	bool isNumeric(char* string)
//	{
//		if (string == nullptr || *string == '\0')
//			return false;
//
//		if (*string == '+' || *string == '-')
//		{
//			if (*(string + 1) == '\0')
//				return false;
//			else
//				return isNumeric_Core(string + 1);
//		}
//		else
//			return isNumeric_Core(string);
//	}
//
//	//�ж��Ƿ��Ǵ�����
//	bool isIntNum_Help(char *string)
//	{
//		if (string == nullptr)
//			return false;
//		while (*string != '\0')
//		{
//			if (*string < '0' || *string > '9')
//				return false;
//
//			string++;
//		}
//		return true;
//	}
//
//	bool isIntNum(char *string)
//	{
//		if (string == nullptr || *string == '\0')
//			return false;
//
//		if (*string == '+' || *string == '-')
//		{
//			return isIntNum(string + 1);
//		}
//		else
//			return isIntNum_Help(string);
//	}
//
//
//	bool isPureNumWithOutPoint_Help(char *string)
//	{
//		if (string == nullptr)
//			return false;
//		if (*string == '\0')
//			return true;
//
//		if (*string >= '0' && *string <= '9')
//		{
//			return isPureNumWithOutPoint_Help(string + 1);
//		}
//		else if (*string == 'e' || *string == 'E')
//			return isIntNum(string + 1);
//		else
//			return false;
//	}
//
//	//�ж��Ƿ���123����2E2��������ʽ����С����
//	bool isPureNumWithOutPoint(char *string)
//	{
//		if (string == nullptr)
//			return false;
//
//		//С������һλ������Ϊ������
//		if (*string < '0' || *string > '9')
//			return false;
//
//		return isPureNumWithOutPoint_Help(string + 1);
//	}	
//};

/******************************************************************************
�������ƣ� FirstAppearingOnce	ţ����52��
����˵���� ��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ������磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��
�� �� ֵ�� char
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/26
******************************************************************************/
//class Solution
//{
//public:
//	Solution()
//	{
//		for (size_t i = 0; i < 256;i++)
//		{
//			m_Index[i] = 0;
//		}
//	}
//	//Insert one char from stringstream
//	void Insert(char ch)
//	{
//		if (m_Index[ch] == 0)
//			m_Index[ch] = 1;
//		else if (m_Index[ch] == 1)
//			m_Index[ch] = -1;
//
//		m_String += ch;
//	}
//	//return the first appearence once char in current stringstream
//	char FirstAppearingOnce()
//	{
//		for (size_t i = 0; i < m_String.size(); i++)
//		{
//			if (m_Index[m_String[i]] == 1)
//				return char(m_String[i]);
//		}
//		return '#';
//	}
//private:
//	int m_Index[256];
//	string m_String;
//};

/******************************************************************************
�������ƣ� EntryNodeOfLoop	ţ����52��
����˵���� һ�������а����������ҳ�������Ļ�����ڽ�㡣
�� �� ֵ�� ListNode*
��    ���� ListNode * pHead
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/28
******************************************************************************/
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL)
//	{
//	}
//};
//
//class Solution
//{
//public:
//	ListNode* EntryNodeOfLoop(ListNode* pHead)
//	{
//		if (pHead == NULL)
//			return nullptr;
//		ListNode* slow = pHead;
//		ListNode* fast = pHead;
//		while (fast != NULL && fast->next != NULL){
//			slow = slow->next;
//			fast = fast->next->next;
//			if (slow == fast)
//				break;
//		}
//		if (fast == NULL || fast->next == NULL)
//			return NULL;
//		
//		slow = pHead;
//		while (slow != fast)
//		{
//			slow = slow->next;
//			fast = fast->next;
//		}
//		return slow;
//	}
//};

/******************************************************************************
�������ƣ� deleteDuplication	ţ����53��
����˵���� ��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5
�� �� ֵ�� ListNode*
��    ���� ListNode * pHead
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/29
******************************************************************************/
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		//ѭ������
//		//if (pHead == nullptr)
//		//	return nullptr;
//
//		//ListNode *head = nullptr;		//���������׽ڵ�
//		//ListNode *preNode = nullptr;	//pHead�ڵ����һ���ڵ�
//		//while (pHead != nullptr)
//		//{
//		//	ListNode *nextNode = pHead->next;
//		//	if (nextNode == nullptr)
//		//	{
//		//		if (head == nullptr)
//		//			head = pHead;
//		//		return head;
//		//	}
//
//		//	if (nextNode->val != pHead->val)
//		//	{
//		//		if (preNode == nullptr)
//		//			head = pHead;
//		//		preNode = pHead;
//		//		pHead = nextNode;
//		//	}
//		//	else
//		//	{
//		//		ListNode *lastUnEqual = nextNode->next;
//		//		while (lastUnEqual != nullptr)
//		//		{
//		//			if (lastUnEqual->val == nextNode->val)
//		//				lastUnEqual = lastUnEqual->next;
//		//			else
//		//				break;
//		//		}
//
//		//		if (lastUnEqual == nullptr)
//		//		{
//		//			if (preNode != nullptr)
//		//				preNode->next = nullptr;
//		//			return head;
//		//		}
//		//		else
//		//		{
//		//			pHead = lastUnEqual;
//		//			if (preNode != nullptr)
//		//				preNode->next = lastUnEqual;
//		//		}
//		//	}
//		//}
//		//return head;
//
//		//�ݹ鷽��
//		//ListNode *root(nullptr);
//		//if (pHead == nullptr)
//		//	return root;
//
//		//ListNode *nextNode = pHead->next;
//		//if (nextNode == nullptr)
//		//	return pHead;
//
//		//if (nextNode->val != pHead->val)
//		//{
//		//	root = pHead;
//		//}
//		//else
//		//{
//		//	while (nextNode->val == pHead->val)
//		//	{
//		//		nextNode = nextNode->next;
//		//		if (nextNode == nullptr)
//		//			return root;
//		//	}
//		//}
//		//
//		//ListNode *nextRoot = deleteDuplication(nextNode);
//		//if (root == nullptr)
//		//	root = nextRoot;
//		//else
//		//	root->next = nextRoot;
//		//return root;
//	}
//
//};

/******************************************************************************
�������ƣ� GetNext	ţ����54��
����˵���� ����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣
�� �� ֵ�� TreeLinkNode*
��    ���� TreeLinkNode * pNode
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/29
******************************************************************************/
//struct TreeLinkNode {
//	int val;
//	struct TreeLinkNode *left;
//	struct TreeLinkNode *right;
//	struct TreeLinkNode *next;
//	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
//
//	}
//};
//
//class Solution {
//public:
//	TreeLinkNode* GetNext(TreeLinkNode* pNode)
//	{
//		if (pNode == nullptr)
//			return nullptr;
//
//		TreeLinkNode *preNode = pNode->next;
//		TreeLinkNode *rNode = pNode->right;
//
//		//pNodeΪ���ڵ㣬��������������ڵ�
//		if (preNode == nullptr)
//			return GetLeftNode(pNode->right);
//
//		//pNodeΪ������
//		if (pNode == preNode->left)
//		{
//			//pNode��������Ϊ�գ���������������ڵ�
//			if (rNode != nullptr)
//				return GetLeftNode(pNode->right);
//			//pNode��������Ϊ�գ����ظ��ڵ�
//			else
//				return preNode;
//		}
//		//pNodeΪ������
//		else
//		{
//			//pNode��������Ϊ�գ���������������ڵ�
//			if (rNode != nullptr)
//				return GetLeftNode(pNode->right);
//			//pNode������Ϊ��
//			else
//			{
//				TreeLinkNode *ppNode = preNode->next;
//				if (ppNode == nullptr || preNode == ppNode->right)
//					return nullptr;
//				else
//					return ppNode;
//			}
//		}
//	}
//
//	//��ȡpNode������ڵ�
//	TreeLinkNode* GetLeftNode(TreeLinkNode* pNode)
//	{
//		if (pNode == nullptr)
//			return nullptr;
//
//		return pNode->left == nullptr ? pNode : GetLeftNode(pNode->left);
//	}
//};

/******************************************************************************
�������ƣ� isSymmetrical	ţ����55��
����˵���� ��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�
�� �� ֵ�� bool
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/29
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	bool isSymmetrical(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return true;
//
//		return isSymmetrical_Help(pRoot->left, pRoot->right);
//	}
//
//	bool isSymmetrical_Help(TreeNode* node1, TreeNode *node2)
//	{
//		if (node1 == nullptr && node2 == nullptr)
//			return true;
//		if ((node1 == nullptr && node2 != nullptr) || (node1 != nullptr && node2 == nullptr) || node1->val != node2->val)
//			return false;
//
//		return isSymmetrical_Help(node1->left, node2->right) && isSymmetrical_Help(node1->right, node2->left);
//	}
//
//};

/******************************************************************************
�������ƣ� Print	ţ����56��
����˵���� ��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ���ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�
�� �� ֵ�� vector<vector<int> >
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/29
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//
//	vector<vector<int> > Print(TreeNode* pRoot)
//	{
//		vector<vector<int>>vvResult;
//		if (pRoot == nullptr)
//			return vvResult;
//
//		deque<TreeNode *>vNodes = { pRoot };
//		bool isLeft = true;
//		while (!vNodes.empty())
//		{
//			size_t nodeSize = vNodes.size();
//			vector<int>vNum;
//			if (isLeft)
//			{
//				for (auto iter1 = vNodes.begin(); iter1 != vNodes.end();iter1++)
//					vNum.push_back((*iter1)->val);
//			}
//			else
//			{
//				for (auto iter1 = vNodes.rbegin(); iter1 != vNodes.rend(); iter1++)
//					vNum.push_back((*iter1)->val);
//			}
//			vvResult.push_back(vNum);
//			isLeft = !isLeft;
//
//			for (size_t i = 0; i < nodeSize; i++)
//			{
//				TreeNode *lNode = vNodes.front()->left;
//				TreeNode *rNode = vNodes.front()->right;
//				if (lNode != nullptr)
//					vNodes.push_back(lNode);
//				if (rNode != nullptr)
//					vNodes.push_back(rNode);
//
//				vNodes.pop_front();
//			}
//		}
//		return vvResult;
//	}
//
//};

/******************************************************************************
�������ƣ� Print	ţ����57��
����˵���� ���ϵ��°����ӡ��������ͬһ����������������ÿһ�����һ�С�
�� �� ֵ�� vector<vector<int> >
��    ���� TreeNode * pRoot
��    �ߣ� Cheng Deng
��    �ڣ� 2017/12/29
******************************************************************************/
//struct TreeNode 
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) 
//	{
//	}
//};
//
//class Solution 
//{
//public:
//	vector<vector<int> > Print(TreeNode* pRoot) 
//	{
//		vector<vector<int>>vvResult;
//		if (pRoot == nullptr)
//			return vvResult;
//
//		deque<TreeNode *>vNodes = { pRoot };
//		while (!vNodes.empty())
//		{
//			size_t nodeSize = vNodes.size();
//			vector<int>vNum;
//			for (int i = 0; i < nodeSize; i++)
//			{
//				vNum.push_back(vNodes.front()->val);
//
//				TreeNode *lNode = vNodes.front()->left;
//				TreeNode *rNode = vNodes.front()->right;
//				if (lNode != nullptr)
//					vNodes.push_back(lNode);
//				if (rNode != nullptr)
//					vNodes.push_back(rNode);
//
//				vNodes.pop_front();
//			}
//
//			vvResult.push_back(vNum);
//		}
//
//		return vvResult;
//	}
//
//};

/******************************************************************************
�������ƣ� Serialize	��ָoffer61��
����˵���� ��ʵ�������������ֱ��������л��ͷ����л�������
�� �� ֵ�� char*
��    ���� TreeNode * root
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	char* Serialize(TreeNode *root)
//	{
//		Serialize_Help(root);
//
//		int *value = new int[m_value.size()];
//		for (int i = 0; i < m_value.size(); i++)
//		{
//			value[i] = m_value[i];
//		}
//		if (m_value.size() == 0)
//			return nullptr;
//		else
//			return (char *)value;
//	}
//
//	TreeNode* Deserialize(char *str)
//	{
//		int *iStr = (int *)str;
//		return Deserialize_Help(iStr);
//	}
//
//	void Serialize_Help(TreeNode *root)
//	{
//		if (root == nullptr)
//			m_value.push_back(INT_MAX);
//		else
//		{
//			m_value.push_back(root->val);
//			Serialize_Help(root->left);
//			Serialize_Help(root->right);
//		}
//	}
//
//	TreeNode *Deserialize_Help(int *&str)
//	{
//		TreeNode *node(nullptr);
//		if (str == nullptr)
//			return node;
//		if (*str == INT_MAX)
//		{
//			str++;
//			return node;
//		}
//		else
//		{
//			node = new TreeNode(*str);
//			str++;
//			node->left = Deserialize_Help(str);
//			node->right = Deserialize_Help(str);
//		}
//		return node;
//	}
//private:
//	vector<int>m_value;
//};

/******************************************************************************
�������ƣ� KthNode	��ָoffer62��
����˵���� ����һ�Ŷ��������������ҳ����еĵ�k��Ľ�㡣���磬 5 / \ 3 7 /\ /\ 2 4 6 8 �У�
�������ֵ��С˳�����������ֵΪ4��
�� �� ֵ�� TreeNode*
��    ���� TreeNode * pRoot
��    ���� int k
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	TreeNode* KthNode(TreeNode* pRoot, int k)
//	{
//		if (pRoot == nullptr)
//			return nullptr;
//
//		int num = 0;
//		TreeNode *result = KthNode_Help(pRoot, k, num);
//		if (num == k)
//			return result;
//		else
//			return nullptr;
//	}
//
//	TreeNode* KthNode_Help(TreeNode *root, int k, int &num)
//	{
//		if (root == nullptr)
//			return nullptr;
//
//		//������ӽڵ�
//		TreeNode *lNode = KthNode_Help(root->left, k, num);
//		if (k == num)
//			return lNode;
//
//		//����Լ�
//		num++;
//		if (k == num)
//			return root;
//
//		//������ӽڵ�
//		TreeNode *rNode = KthNode_Help(root->right, k, num);
//		if (k == num)
//			return rNode;
//
//		return nullptr;
//	}
//};

/******************************************************************************
�������ƣ� Insert	��ָoffer63��
����˵������εõ�һ���������е���λ����������������ж�����������ֵ����ô��λ������������ֵ����֮��
λ���м����ֵ��������������ж���ż������ֵ����ô��λ������������ֵ����֮���м���������ƽ��ֵ��
�� �� ֵ�� void
��    ���� int num
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	//���淽ʽ������list����Ӹ��Ӷ�O(n)�����Ҹ��Ӷ�O(n)
////	void Insert(int num)
////	{
////		auto iter1 = upper_bound(buf.begin(), buf.end(), num);
////		buf.insert(iter1, num);
////		index++;
////	}
////
////	double GetMedian()
////	{
////		long half = index / 2;
////		auto iter1 = buf.begin();
////		//����
////		if (index & 0x01)
////		{
////			for (long i = 0; i < half; i++)
////				iter1 = iter1++;
////
////			return *iter1;
////		}
////		else
////		{
////			for (long i = 0; i < half - 1; i++)
////				iter1 = iter1++;
////
////			return (*iter1 + *(++iter1)) / 2.0;
////		}
////		return 0;
////	}
////
////	Solution() :
////		num(0)
////	{}
////
////private:
////	list<int>buf;
////	long num;
//
//	//������С����
////	void Insert(int num)
////	{
////		//��num��maxHeap�ĶѶ����Ƚϣ����num��num���ڴ�ˣ���������С�ˣ�
////		//��num�����˻�С�˺󣬱Ƚϴ��С�˲�࣬���ܴ���1
////		if (minHeap.empty() || maxHeap.empty() || maxHeap.front() < num)
////		{
////			minHeap.push_back(num);
////			push_heap(minHeap.begin(), minHeap.end(), greater<int>());
////			//�������̫��
////			if (minHeap.size() > maxHeap.size() + 1)
////			{
////				pop_heap(minHeap.begin(), minHeap.end(), greater<int>());
////
////				maxHeap.push_back(minHeap.back());
////				push_heap(maxHeap.begin(), maxHeap.end(), less<int>());
////
////				minHeap.pop_back();
////			}
////		}
////		else
////		{
////			maxHeap.push_back(num);
////			push_heap(maxHeap.begin(), maxHeap.end(), less<int>());
////
////			//С������̫��
////			if (maxHeap.size() > minHeap.size() + 1)
////			{
////				pop_heap(maxHeap.begin(), maxHeap.end(), less<int>());
////
////				minHeap.push_back(maxHeap.back());
////				push_heap(minHeap.begin(), minHeap.end(), greater<int>());
////
////				maxHeap.pop_back();
////			}
////		}
////	}
////
////	double GetMedian()
////	{
////		if (minHeap.size() == 0)
////			return INT_MIN;
////		if (maxHeap.size() == minHeap.size())
////			return ((double)maxHeap.front() + (double)minHeap.front()) / 2;
////		else if (maxHeap.size() > minHeap.size())
////			return maxHeap.front();
////		else
////			return minHeap.front();
////
////	}
////
////private:
////	vector<int>maxHeap;		//С�ˣ����
////	vector<int>minHeap;		//��ˣ�С��
//};

/******************************************************************************
�������ƣ� maxInWindows	��ָoffer64��
����˵���� ����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ�����磬�����������{2,3,4,2,6,2,5,1}
���������ڵĴ�С3����ôһ������6���������ڣ����ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}
�Ļ�������������6���� {[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}��
{2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��
�� �� ֵ�� vector<int>
��    ���� const vector<int> & num
��    ���� unsigned int size
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		vector<int>result;
//		deque<int>vBuf;		//���ÿ���������ڵ����ֵ��Ӧ�ı��
//		if (size == 0 || num.size() < size)
//			return result;
//
//		for (size_t i = 0; i < size; i++)
//		{
//			while (!vBuf.empty() && num[i] >= num[vBuf.back()])
//				vBuf.pop_back();
//			vBuf.push_back(i);
//		}
//		result.push_back(num[vBuf.front()]);
//
//		for (size_t j = size; j < num.size(); ++j)
//		{
//			if (j - vBuf.front() >= size)
//				vBuf.pop_front();
//
//			while (!vBuf.empty() && num[j] >= num[vBuf.back()])
//				vBuf.pop_back();
//
//			vBuf.push_back(j);
//
//			result.push_back(num[vBuf.front()]);
//		}
//		return result;
//	}
//};

/******************************************************************************
�������ƣ� hasPath	��ָoffer65��
����˵���� �����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����·�����ԴӾ����е�����һ
�����ӿ�ʼ��ÿһ�������ھ������������ң����ϣ������ƶ�һ�����ӡ����һ��·�������˾����е�ĳһ�����ӣ����·��������
����ø��ӡ� ���� a b c e s f c s a d e e �����а���һ���ַ���"bcced"��·�������Ǿ����в�����"abcb"·������Ϊ�ַ�
���ĵ�һ���ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���ø��ӡ�
�� �� ֵ�� bool
��    ���� char * matrix
��    ���� int rows
��    ���� int cols
��    ���� char * str
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	bool hasPath(char* matrix, int rows, int cols, char* str)
//	{
//		for (size_t i = 0; matrix[i] != '\0'; ++i)
//		{
//			if (*(matrix + i) == *str)
//			{
//				vector<bool>vStatus(rows * cols, false);
//				vStatus[i] = true;
//				bool b1 = hasPath_Help(matrix + i, i, rows, cols, str + 1, vStatus);
//				if (b1)
//					return true;
//			}
//		}
//		return false;
//	}
//
//	bool hasPath_Help(char *target, int index, int rows, int cols, char *str, vector<bool>&vStatus)
//	{
//		if (*str == '\0')
//			return true;
//
//		//����
//		if ((index % cols != 0) && (vStatus[index - 1] == false))
//		{
//			if (*(target - 1) == *str)
//			{
//				vStatus[index - 1] = true;
//				bool b1 = hasPath_Help(target - 1, index - 1, rows, cols, str + 1, vStatus);
//				if (b1)
//					return true;
//			}
//		}
//		//����
//		if (((index + 1) % cols != 0) && (vStatus[index + 1] == false))
//		{
//			if (*(target + 1) == *str)
//			{
//				vStatus[index + 1] = true;
//				bool b1 = hasPath_Help(target + 1, index + 1, rows, cols, str + 1, vStatus);
//				if (b1)
//					return true;
//			}
//		}
//		//����
//		if ((index >= cols) && (vStatus[index - cols] == false))
//		{
//			if (*(target - cols) == *str)
//			{
//				vStatus[index - cols] = true;
//				bool b1 = hasPath_Help(target - cols, index - cols, rows, cols, str + 1, vStatus);
//				if (b1)
//					return true;
//			}
//		}
//		//����
//		if ((index < (rows - 1)*cols) && (vStatus[index + cols] == false))
//		{
//			if (*(target + cols) == *str)
//			{
//				vStatus[index + cols] = true;
//				bool b1 = hasPath_Help(target + cols, index + cols, rows, cols, str + 1, vStatus);
//				if (b1)
//					return true;
//			}
//		}
//		return false;
//	}
//};

/******************************************************************************
�������ƣ� movingCount	��ָoffer��66��
����˵���� ������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ��
���ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ� ���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ
3+5+3+7 = 18�����ǣ������ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�
�� �� ֵ�� int
��    ���� int threshold
��    ���� int rows
��    ���� int cols
��    �ߣ� Cheng Deng
��    �ڣ� 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	int movingCount(int threshold, int rows, int cols)
//	{
//		int result = 0;
//		vector<bool>isReach(rows * cols, false);
//		movingCount_help(threshold, 0, 0, rows, cols, isReach);
//		for (size_t i = 0; i < isReach.size(); ++i)
//		{
//			if (isReach[i])
//				++result;
//		}
//		return result;
//	}
//
//	void movingCount_help(int threshold, int row_index, int col_index, int rows, int cols, vector<bool>&isReach)
//	{
//		if (CountNum(row_index) + CountNum(col_index) > threshold)
//			return;
//
//		int index = row_index * cols + col_index;
//		if (isReach[index])
//			return;
//
//		isReach[index] = true;
//
//		//����
//		if (row_index > 0)
//			movingCount_help(threshold, row_index - 1, col_index, rows, cols, isReach);
//		//����
//		if (row_index < rows)
//			movingCount_help(threshold, row_index + 1, col_index, rows, cols, isReach);
//		//����
//		if (col_index > 0)
//			movingCount_help(threshold, row_index, col_index - 1, rows, cols, isReach);
//		//����
//		if (col_index < cols)
//			movingCount_help(threshold, row_index, col_index + 1, rows, cols, isReach);
//	}
//
//	int CountNum(size_t num)
//	{
//		int result = 0;
//		
//		while (num != 0)
//		{
//			int bat = num % 10;
//			result += bat;
//			num = (num - bat) / 10;
//		}
//		return result;
//	}
//};
