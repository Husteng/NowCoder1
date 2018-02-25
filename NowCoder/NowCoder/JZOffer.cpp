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
函数名称： Find	剑指offer第1题
功能说明： 在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
返 回 值： bool
参    数： int target
参    数： vector<vector<int> > array
作    者： Cheng Deng
日    期： 2017/10/30
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
函数名称： replaceSpace	剑指offer第2题
功能说明： 请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
返 回 值： void
参    数： char * str
参    数： int length
作    者： Cheng Deng
日    期： 2017/10/30
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
函数名称： printListFromTailToHead	剑指offer第3题
功能说明： 输入一个链表，从尾到头打印链表每个节点的值。
返 回 值： vector<int>
参    数： ListNode * head
作    者： Cheng Deng
日    期： 2017/10/31
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
函数名称： reConstructBinaryTree	剑指offer第4题
功能说明： 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
返 回 值： TreeNode*
参    数： vector<int> pre
参    数： vector<int> vin
作    者： Cheng Deng
日    期： 2017/10/31
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
// 	//递归写法
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
函数名称： push	剑指offer第5题
功能说明：用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
返 回 值： void
参    数： int node
作    者： Cheng Deng
日    期： 2017/10/31
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
函数名称： minNumberInRotateArray	剑指offer第6题
功能说明： 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
返 回 值： int
参    数： vector<int> rotateArray
作    者： Cheng Deng
日    期： 2017/11/01
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
// 			//区分11101这种重复情况
// 			if (rotateArray[leftIndex] == rotateArray[rightIndex] && rotateArray[leftIndex] == rotateArray[midIndex])
// 			{
// 				int minInt = rotateArray[leftIndex];
// 				for (size_t i = leftIndex + 1; i <= rightIndex; i++)
// 				{
// 					//第一次跳变的位置肯定就是最小值位置
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
函数名称： Fibonacci	剑指offer第6题
功能说明： 大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
返 回 值： int
参    数： int n
作    者： Cheng Deng
日    期： 2017/11/01
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
函数名称： jumpFloor	剑指offer第7题
功能说明： 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
返 回 值： int
参    数： int number
作    者： Cheng Deng
日    期： 2017/11/01
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
函数名称： jumpFloorII	剑指offer第8题
功能说明： 我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
返 回 值： int
参    数： int number
作    者： Cheng Deng
日    期： 2017/11/01
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
函数名称： rectCover	剑指offer第9题
功能说明： 我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
返 回 值： int
参    数： int number
作    者： Cheng Deng
日    期： 2017/11/01
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
函数名称： NumberOf1	剑指offer第10题
功能说明： 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
返 回 值： int
参    数： int n
作    者： Cheng Deng
日    期： 2017/11/03
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
函数名称： Power	剑指offer第11题
功能说明： 给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
返 回 值： double
参    数： double base
参    数： int exponent
作    者： Cheng Deng
日    期： 2017/11/03
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
//				throw("非法运算！");
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
函数名称： reOrderArray	剑指offer第12题
功能说明： 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
返 回 值： void
参    数： vector<int> & array
作    者： Cheng Deng
日    期： 2017/11/03
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
函数名称： FindKthToTail	剑指offer第13题
功能说明： 输入一个链表，输出该链表中倒数第k个结点。
返 回 值： ListNode*
参    数： ListNode * pListHead
参    数： unsigned int k
作    者： Cheng Deng
日    期： 2017/11/03
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
函数名称： Merge	剑指offer第14题
功能说明： 输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
返 回 值： ListNode*
参    数： ListNode * pHead1
参    数： ListNode * pHead2
作    者： Cheng Deng
日    期： 2017/11/06
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
函数名称： HasSubtree	剑指offer第15题
功能说明： 输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
返 回 值： bool
参    数： TreeNode * pRoot1
参    数： TreeNode * pRoot2
作    者： Cheng Deng
日    期： 2017/11/06
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
函数名称： Mirror	剑指offer第16题
功能说明： 操作给定的二叉树，将其变换为源二叉树的镜像。
返 回 值： void
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/11/06
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
函数名称： printMatrix	剑指offer第17题
功能说明： 输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
例如，如果输入如下矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
返 回 值： vector<int>
参    数： vector<vector<int> > matrix
作    者： Cheng Deng
日    期： 2017/11/06
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
函数名称： push	剑指offer第18题
功能说明： 定义栈的数据结构，请在该类型中实现一个能够得到栈最小元素的min函数。
返 回 值： void
参    数： int value
作    者： Cheng Deng
日    期： 2017/11/06
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
函数名称： IsPopOrder	剑指offer第19题
功能说明： 输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否为该栈的弹出顺序。
假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4，5,3,2,1是该压栈序列
对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
返 回 值： bool
参    数： vector<int> pushV
参    数： vector<int> popV
作    者： Cheng Deng
日    期： 2017/11/07
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
函数名称： PrintFromTopToBottom		剑指offer第20题
功能说明： 从上往下打印出二叉树的每个节点，同层节点从左至右打印。
返 回 值： vector<int>
参    数： TreeNode * root
作    者： Cheng Deng
日    期： 2017/11/07
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
函数名称： VerifySquenceOfBST	剑指offer第21题
功能说明： 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
返 回 值： bool
参    数： vector<int> sequence
作    者： Cheng Deng
日    期： 2017/11/07
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
函数名称： FindPath 剑指offer第22题
功能说明： 输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
返 回 值： vector<vector<int> >
参    数： TreeNode * root
参    数： int expectNumber
作    者： Cheng Deng
日    期： 2017/11/07
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
函数名称： Clone	剑指offer第23题
功能说明： 输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，
另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
返 回 值： RandomListNode*
参    数： RandomListNode * pHead
作    者： Cheng Deng
日    期： 2017/11/15
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
函数名称： Convert	剑指offer第24题
功能说明： 输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。
返 回 值： TreeNode*
参    数： TreeNode * pRootOfTree
作    者： Cheng Deng
日    期： 2017/11/24
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
函数名称： Permutation	剑指offer第25题
功能说明： 输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
返 回 值： vector<string>
参    数： string str
作    者： Cheng Deng
日    期： 2017/11/27
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
函数名称： MoreThanHalfNum_Solution		剑指offer第26题
功能说明： 数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
返 回 值： int
参    数： vector<int> numbers
作    者： Cheng Deng
日    期： 2017/11/27
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
函数名称： GetLeastNumbers_Solution		剑指offer第27题
功能说明： 输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
返 回 值： vector<int>
参    数： vector<int> input
参    数： int k
作    者： Cheng Deng
日    期： 2017/11/27
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
函数名称： FindGreatestSumOfSubArray	剑指offer第28题
功能说明： HZ偶尔会拿些专业问题来忽悠那些非计算机专业的同学。今天测试组开完会后,他又发话了:
在古老的一维模式识别中,常常需要计算连续子向量的最大和,当向量全为正数的时候,问题很好解决。但是
,如果向量中包含负数,是否应该包含某个负数,并期望旁边的正数会弥补它呢？例如:{6,-3,-2,7,-15,1,2,2}
,连续子向量的最大和为8(从第0个开始,到第3个为止)。你会不会被他忽悠住？(子向量的长度至少是1)
返 回 值： int
参    数： vector<int> array
作    者： Cheng Deng
日    期： 2017/11/27
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
函数名称： NumberOf1Between1AndN_Solution	剑指offer第29题
功能说明： 求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？为此他特别数了一下1~13中包含1的数字
有1、10、11、12、13因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数。
返 回 值： int
参    数： int n
作    者： Cheng Deng
日    期： 2017/11/28
******************************************************************************/
//class Solution {
//public:
//	int NumberOf1Between1AndN_Solution(int n)
//	{
//		if (n < 1)
//			return 0;
//
//		int m = log10(n) + 1;	//n的位数
//
//		int nLeft = 0;	//标准左侧的值
//		int nRight = n;	//标准右侧的值
//		int k = 0;		//标准的值
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
函数名称： PrintMinNumber	剑指offer第30题
功能说明： 输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。
返 回 值： std::string
参    数： vector<int> numbers
作    者： Cheng Deng
日    期： 2017/11/28
******************************************************************************/
// class Solution {
// public:
// 	string PrintMinNumber(vector<int> numbers)
// 	{
// 		//插入排序
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
函数名称： GetUglyNumber_Solution	剑指offer第31题
功能说明： 把只包含因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含因子7。
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
返 回 值： int
参    数： int index
作    者： Cheng Deng
日    期： 2017/11/28
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
函数名称： FirstNotRepeatingChar	剑指offer第32题
功能说明： 在一个字符串(1<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置
返 回 值： int
参    数： string str
作    者： Cheng Deng
日    期： 2017/11/28
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
函数名称： InversePairs		剑指offer第33题
功能说明： 在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组,求出这个数组中的逆序对的总数P。
并将P对1000000007取模的结果输出。 即输出P%1000000007
返 回 值： int
参    数： vector<int> data
作    者： Cheng Deng
日    期： 2017/11/29
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
函数名称： FindFirstCommonNode	牛客网第34题
功能说明： 输入两个链表，找出它们的第一个公共结点。
返 回 值： ListNode*
参    数： ListNode * pHead1
参    数： ListNode * pHead2
作    者： Cheng Deng
日    期： 2017/12/08
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
函数名称： GetNumberOfK	剑指offer第35题
功能说明： 统计一个数字在排序数组中出现的次数。
返 回 值： int
参    数： vector<int> data
参    数： int k
作    者： Cheng Deng
日    期： 2017/12/09
******************************************************************************/
//class Solution {
//public:
//	int GetNumberOfK(vector<int> data, int k)
//	{
//		if (data.empty())
//			return 0;
//
//		int orderType = 0;		//升序为1，降序为-1
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
//		size_t first = -1, last = -1;		//起始终止位置
//
//		int status = FindFirstLastK(data, k, first, last, orderType);
//
//		if (status == -1)
//			return 0;
//		else
//			return last - first + 1;
//	}
//
//	//查找有序数组中的第一个和最后一个k值所在的位置
//	int FindFirstLastK(vector<int>data, int k, size_t &first, size_t &last, int orderType/*1表示升序，-1表示降序*/)
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
函数名称： TreeDepth	剑指offer第36题
功能说明： 输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
返 回 值： int
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/12/09
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
//		//递归方式
//// 		if (pRoot == nullptr)
//// 			return 0;
//// 
//// 		int lDepth = TreeDepth(pRoot->left);
//// 		int rDepth = TreeDepth(pRoot->right);
//// 
//// 		return 1 + max(lDepth, rDepth);
//
//		//循环方式
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
函数名称： IsBalanced_Solution	剑指offer第37题
功能说明： 输入一棵二叉树，判断该二叉树是否是平衡二叉树。
返 回 值： bool
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/12/09
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
函数名称： FindNumsAppearOnce	剑指offer第38题
功能说明： 一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。
返 回 值： void
参    数： vector<int> data
参    数： int * num1
参    数： int * num2
作    者： Cheng Deng
日    期： 2017/12/09
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
// 		//与操作符
// 		int xor_num = 0;
// 		for (size_t i = 0; i < data.size(); i++)
// 			xor_num = xor_num^data[i];
// 
// 		////查找第一个为1的位；
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
函数名称： FindContinuousSequence	剑指offer第39题
功能说明： 小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。
但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连
续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!
返 回 值： vector<vector<int> >
参    数： int sum
作    者： Cheng Deng
日    期： 2017/12/11
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
函数名称： FindNumbersWithSum	剑指offer第40题
功能说明： 输入一个递增排序的数组和一个数字S，在数组中查找两个数，是的他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
返 回 值： vector<int>
参    数： vector<int> array
参    数： int sum
作    者： Cheng Deng
日    期： 2017/12/11
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
函数名称： LeftRotateString		剑指offer第41题
功能说明： 汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
返 回 值： std::string
参    数： string str
参    数： int n
作    者： Cheng Deng
日    期： 2017/12/11
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
函数名称： ReverseSentence	剑指offer第42题
功能说明： 牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
返 回 值： std::string
参    数： string str
作    者： Cheng Deng
日    期： 2017/12/11
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
函数名称： IsContinuous		剑指offer第43题
功能说明： LL今天心情特别好,因为他去买了一副扑克牌,发现里面居然有2个大王,2个小王(一副牌原本是54张^_^)...他随机从中抽出了5张牌,
想测测自己的手气,看看能不能抽到顺子,如果抽到的话,他决定去买体育彩票,嘿嘿！！“红心A,黑桃3,小王,大王,方片5”,“Oh My God!”不是
顺子.....LL不高兴了,他想了想,决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。上面的5张牌就可以变成“1,2,3,4,5”
(大小王分别看作2和4),“So Lucky!”。LL决定去买体育彩票啦。 现在,要求你使用这幅牌模拟上面的过程,然后告诉我们LL的运气如何。为了方
便起见,你可以认为大小王是0。
返 回 值： bool
参    数： vector<int> numbers
作    者： Cheng Deng
日    期： 2017/12/11
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
函数名称： LastRemaining_Solution	剑指offer44题
功能说明： 每年六一儿童节,牛客都会准备一些小礼物去看望孤儿院的小朋友,今年亦是如此。HF作为牛客的资深元老,自然也准备了一些小游戏。
其中,有个游戏是这样的:首先,让小朋友们围成一个大圈。然后,他随机指定一个数m,让编号为0的小朋友开始报数。每次喊到m-1的那个小朋友要出
列唱首歌,然后可以在礼品箱中任意的挑选礼物,并且不再回到圈中,从他的下一个小朋友开始,继续0...m-1报数....这样下去....直到剩下最后
一个小朋友,可以不用表演,并且拿到牛客名贵的“名侦探柯南”典藏版(名额有限哦!!^_^)。请你试着想下,哪个小朋友会得到这份礼品呢？(注：
小朋友的编号是从0到n-1)
返 回 值： int
参    数： int n
参    数： int m
作    者： Cheng Deng
日    期： 2017/12/11
******************************************************************************/
//class Solution {
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		//循环遍历法
//		//if (n < 1 || m < 1)
//		//	return -1;
//		//vector<int>status(n);
//		//int num1 = 0;		//出列人数
//		//int numIndex = -1;	//最后出列人员编号
//		//while (num1 < n)
//		//{
//		//	int numIndexTmp = numIndex;		//起始编号位置
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
//		//递推法
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
函数名称： Sum_Solution		剑指offer45题
功能说明： 求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
返 回 值： int
参    数： int n
作    者： Cheng Deng
日    期： 2017/12/12
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
////虚函数
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
////虚函数
////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////
////函数指针
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
////函数指针
////////////////////////////////////////////////////////////////////////////
//class Solution {
//public:
//	int Sum_Solution(int n)
//	{
//		//构造函数
//		//vector<ClassA>vA(n);
//
//		//return ClassA::m_sum;
//
//		//虚函数
//		//ClassB b1;
//		//ClassC c1;
//		//arrayB[0] = &b1;
//		//arrayB[1] = &c1;
//		//int sum = arrayB[1]->fun1(n);
//		//return sum;
//
//		//函数指针
//		//funTmp[0] = fun_help;
//		//funTmp[1] = fun_sum;
//
//		//return fun_sum(n);
//	}
//};

/******************************************************************************
函数名称： Add	剑指offer46题
功能说明： 写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。
返 回 值： int
参    数： int num1
参    数： int num2
作    者： Cheng Deng
日    期： 2017/12/12
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
函数名称： StrToInt		剑指offer第47题
功能说明： 将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
返 回 值： int
参    数： string str
作    者： Cheng Deng
日    期： 2017/12/13
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
函数名称： duplicate	剑指offer48题
功能说明：在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。
也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。
返 回 值： bool
参    数： int numbers[]
参    数： int length
参    数： int * duplication
作    者： Cheng Deng
日    期： 2017/12/16
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
//		//额外数组法
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
//		//用数组本身做计数
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
函数名称： multiply		牛客网49题m
功能说明： 给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
返 回 值： vector<int>
参    数： const vector<int> & A
作    者： Cheng Deng
日    期： 2017/12/16
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
函数名称： match	牛客网50题
功能说明： 请实现一个函数用来匹配包括'.'和'*'的正则表达式。模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。
在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配
返 回 值： bool
参    数： char * str
参    数： char * pattern
作    者： Cheng Deng
日    期： 2017/12/22
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
//		/*解题思路：
//		1、如果第二个字符不为*
//			1、如果第一个字符匹配，递归str + 1， pattern + 1;
//			2、如果第一个字符不匹配，返回false；
//		2、如果第二个字符为*
//			1、~*匹配空，递归str，pattern + 2;
//			2、如果第一个字符不匹配，返回空；如果第一个字符匹配，分两种情况
//				1、~*匹配第一个字符，递归str + 1, pattern + 2;
//				2、~*匹配多个字符，递归str + 1, pattern;
//		关键点：
//		程序返回条件、保证数组不越界；
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
函数名称： isNumeric	牛客网51题
功能说明： 请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。
但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
返 回 值： bool
参    数： char * string
作    者： Cheng Deng
日    期： 2017/12/25
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
//	//判断是否是无符号型数字
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
//	//判断是否是纯整数
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
//	//判断是否是123或者2E2这两种形式，无小数点
//	bool isPureNumWithOutPoint(char *string)
//	{
//		if (string == nullptr)
//			return false;
//
//		//小数点后第一位不可以为非数字
//		if (*string < '0' || *string > '9')
//			return false;
//
//		return isPureNumWithOutPoint_Help(string + 1);
//	}	
//};

/******************************************************************************
函数名称： FirstAppearingOnce	牛客网52题
功能说明： 请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
返 回 值： char
作    者： Cheng Deng
日    期： 2017/12/26
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
函数名称： EntryNodeOfLoop	牛客网52题
功能说明： 一个链表中包含环，请找出该链表的环的入口结点。
返 回 值： ListNode*
参    数： ListNode * pHead
作    者： Cheng Deng
日    期： 2017/12/28
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
函数名称： deleteDuplication	牛客网53题
功能说明： 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
返 回 值： ListNode*
参    数： ListNode * pHead
作    者： Cheng Deng
日    期： 2017/12/29
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
//		//循环方法
//		//if (pHead == nullptr)
//		//	return nullptr;
//
//		//ListNode *head = nullptr;		//最后输出的首节点
//		//ListNode *preNode = nullptr;	//pHead节点的上一个节点
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
//		//递归方法
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
函数名称： GetNext	牛客网54题
功能说明： 给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
返 回 值： TreeLinkNode*
参    数： TreeLinkNode * pNode
作    者： Cheng Deng
日    期： 2017/12/29
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
//		//pNode为根节点，返回右子树最左节点
//		if (preNode == nullptr)
//			return GetLeftNode(pNode->right);
//
//		//pNode为左子树
//		if (pNode == preNode->left)
//		{
//			//pNode右子树不为空，返回右子树最左节点
//			if (rNode != nullptr)
//				return GetLeftNode(pNode->right);
//			//pNode右子树不为空，返回父节点
//			else
//				return preNode;
//		}
//		//pNode为右子树
//		else
//		{
//			//pNode右子树不为空，返回右子树最左节点
//			if (rNode != nullptr)
//				return GetLeftNode(pNode->right);
//			//pNode右子树为空
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
//	//获取pNode的最左节点
//	TreeLinkNode* GetLeftNode(TreeLinkNode* pNode)
//	{
//		if (pNode == nullptr)
//			return nullptr;
//
//		return pNode->left == nullptr ? pNode : GetLeftNode(pNode->left);
//	}
//};

/******************************************************************************
函数名称： isSymmetrical	牛客网55题
功能说明： 请实现一个函数，用来判断一颗二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
返 回 值： bool
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/12/29
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
函数名称： Print	牛客网56题
功能说明： 请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
返 回 值： vector<vector<int> >
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/12/29
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
函数名称： Print	牛客网57题
功能说明： 从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
返 回 值： vector<vector<int> >
参    数： TreeNode * pRoot
作    者： Cheng Deng
日    期： 2017/12/29
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
函数名称： Serialize	剑指offer61题
功能说明： 请实现两个函数，分别用来序列化和反序列化二叉树
返 回 值： char*
参    数： TreeNode * root
作    者： Cheng Deng
日    期： 2018/01/02
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
函数名称： KthNode	剑指offer62题
功能说明： 给定一颗二叉搜索树，请找出其中的第k大的结点。例如， 5 / \ 3 7 /\ /\ 2 4 6 8 中，
按结点数值大小顺序第三个结点的值为4。
返 回 值： TreeNode*
参    数： TreeNode * pRoot
参    数： int k
作    者： Cheng Deng
日    期： 2018/01/02
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
//		//检查左子节点
//		TreeNode *lNode = KthNode_Help(root->left, k, num);
//		if (k == num)
//			return lNode;
//
//		//检查自己
//		num++;
//		if (k == num)
//			return root;
//
//		//检查右子节点
//		TreeNode *rNode = KthNode_Help(root->right, k, num);
//		if (k == num)
//			return rNode;
//
//		return nullptr;
//	}
//};

/******************************************************************************
函数名称： Insert	剑指offer63题
功能说明：如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么中位数就是所有数值排序之后
位于中间的数值。如果从数据流中读出偶数个数值，那么中位数就是所有数值排序之后中间两个数的平均值。
返 回 值： void
参    数： int num
作    者： Cheng Deng
日    期： 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	//常规方式，采用list，添加复杂度O(n)，查找复杂度O(n)
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
////		//奇数
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
//	//采用最小最大堆
////	void Insert(int num)
////	{
////		//将num和maxHeap的堆顶做比较，如果num大，num属于大端，否则属于小端；
////		//将num加入大端或小端后，比较大端小端差距，其差不能大于1
////		if (minHeap.empty() || maxHeap.empty() || maxHeap.front() < num)
////		{
////			minHeap.push_back(num);
////			push_heap(minHeap.begin(), minHeap.end(), greater<int>());
////			//大端数量太多
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
////			//小端数量太多
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
////	vector<int>maxHeap;		//小端，大堆
////	vector<int>minHeap;		//大端，小堆
//};

/******************************************************************************
函数名称： maxInWindows	剑指offer64题
功能说明： 给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值。例如，如果输入数组{2,3,4,2,6,2,5,1}
及滑动窗口的大小3，那么一共存在6个滑动窗口，他们的最大值分别为{4,4,6,6,6,5}； 针对数组{2,3,4,2,6,2,5,1}
的滑动窗口有以下6个： {[2,3,4],2,6,2,5,1}， {2,[3,4,2],6,2,5,1}， {2,3,[4,2,6],2,5,1}，
{2,3,4,[2,6,2],5,1}， {2,3,4,2,[6,2,5],1}， {2,3,4,2,6,[2,5,1]}。
返 回 值： vector<int>
参    数： const vector<int> & num
参    数： unsigned int size
作    者： Cheng Deng
日    期： 2018/01/02
******************************************************************************/
//class Solution {
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		vector<int>result;
//		deque<int>vBuf;		//存放每个滑动窗口的最大值对应的编号
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
函数名称： hasPath	剑指offer65题
功能说明： 请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。路径可以从矩阵中的任意一
个格子开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。如果一条路径经过了矩阵中的某一个格子，则该路径不能再
进入该格子。 例如 a b c e s f c s a d e e 矩阵中包含一条字符串"bcced"的路径，但是矩阵中不包含"abcb"路径，因为字符
串的第一个字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入该格子。
返 回 值： bool
参    数： char * matrix
参    数： int rows
参    数： int cols
参    数： char * str
作    者： Cheng Deng
日    期： 2018/01/02
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
//		//向左
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
//		//向右
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
//		//向上
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
//		//向下
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
函数名称： movingCount	剑指offer第66题
功能说明： 地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，每一次只能向左，右，上，下四个方向移动一格，
但是不能进入行坐标和列坐标的数位之和大于k的格子。 例如，当k为18时，机器人能够进入方格（35,37），因为
3+5+3+7 = 18。但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？
返 回 值： int
参    数： int threshold
参    数： int rows
参    数： int cols
作    者： Cheng Deng
日    期： 2018/01/02
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
//		//向上
//		if (row_index > 0)
//			movingCount_help(threshold, row_index - 1, col_index, rows, cols, isReach);
//		//向下
//		if (row_index < rows)
//			movingCount_help(threshold, row_index + 1, col_index, rows, cols, isReach);
//		//向左
//		if (col_index > 0)
//			movingCount_help(threshold, row_index, col_index - 1, rows, cols, isReach);
//		//向右
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
