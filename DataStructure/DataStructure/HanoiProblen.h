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
	  �������ƣ� Solution
	  ����˵���� ��ŵ������Ľ���취1
	  �� �� ֵ�� int	�����ƶ�������Ҫ���ƶ�����
	  ��    �ߣ� Cheng Deng
	  ��    �ڣ� 2017/10/28
	******************************************************************************/
	int Solution1();

private:
	/******************************************************************************
	  �������ƣ� MoveAction
	  ����˵���� �ƶ�����
	  �� �� ֵ�� int
	  ��    ���� Action iRecord
	  ��    ���� Action iPreNoAct
	  ��    ���� Action iNowAct
	  ��    �ߣ� Cheng Deng
	  ��    �ڣ� 2017/10/28
	******************************************************************************/
	int MoveAction(Action &iRecord, Action iPreNoAct, Action iNowAct);
private:
	HanoiDB *m_hanoiDB;
	size_t m_size;
};
