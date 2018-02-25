#pragma once
#include <stack>

using namespace std;
class HanoiDB
{
public:
	HanoiDB(size_t n) :
		m_size(n), m_lStack(nullptr), m_mStack(nullptr), m_rStack(nullptr)
	{
		initial();
	}
	~HanoiDB()
	{
		delete m_lStack;
		delete m_mStack;
		delete m_rStack;
	};

	int initial();
public:
	stack<int> *m_lStack;
	stack<int> *m_mStack;
	stack<int> *m_rStack;
private:
	size_t m_size;
};

class HanoiSolution
{
	enum Action
	{
		No,
		LToM,
		MToL,
		MToR,
		RToM
	};

public:
	HanoiSolution(size_t n):
		m_size(n)
	{
		m_hanoiDB = new HanoiDB(n);
	}
		
	~HanoiSolution()
	{
		delete m_hanoiDB;
	};

	/******************************************************************************
	  函数名称： Solution
	  功能说明： 汉诺塔问题的解决办法1
	  返 回 值： int	返回移动操作需要的移动次数
	  作    者： Cheng Deng
	  日    期： 2017/10/28
	******************************************************************************/
	int Solution1();

private:
	/******************************************************************************
	  函数名称： MoveAction
	  功能说明： 移动操作
	  返 回 值： int
	  参    数： Action iRecord
	  参    数： Action iPreNoAct
	  参    数： Action iNowAct
	  作    者： Cheng Deng
	  日    期： 2017/10/28
	******************************************************************************/
	int MoveAction(Action &iRecord, Action iPreNoAct, Action iNowAct);
private:
	HanoiDB *m_hanoiDB;
	size_t m_size;
};
