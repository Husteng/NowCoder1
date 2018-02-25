#include "HanoiProblen.h"

int HanoiDB::initial()
{
	m_lStack = new stack<int>();
	m_mStack = new stack<int>();
	m_rStack = new stack<int>();
	for (size_t i = m_size; i > 0; --i)
	{
		m_lStack->push(i);
	}
	return 0;
}

int HanoiSolution::Solution1()
{
	int actionTime = 0;
	Action record = No;
	while (m_hanoiDB->m_rStack->size() < m_size)
	{
		actionTime += MoveAction(record, MToL, LToM);
		actionTime += MoveAction(record, LToM, MToL);
		actionTime += MoveAction(record, RToM, MToR);
		actionTime += MoveAction(record, MToR, RToM);
	}
	return actionTime;
}

int HanoiSolution::MoveAction(Action &iRecord, Action iPreNoAct, Action iNowAct)
{
	if (iRecord == iPreNoAct)
		return 0;
	switch (iNowAct)
	{
	case HanoiSolution::No:
		break;
	case HanoiSolution::LToM:
	{
								if (m_hanoiDB->m_lStack->empty())
									return 0;
								if (m_hanoiDB->m_mStack->empty() || m_hanoiDB->m_lStack->top() < m_hanoiDB->m_mStack->top())
								{
									m_hanoiDB->m_mStack->push(m_hanoiDB->m_lStack->top());
									m_hanoiDB->m_lStack->pop();
									iRecord = LToM;
									return 1;
								}
								return 0;
	}
		break;
	case HanoiSolution::MToL:
	{
								if (m_hanoiDB->m_mStack->empty())
									return 0;
								if (m_hanoiDB->m_lStack->empty() || m_hanoiDB->m_mStack->top() < m_hanoiDB->m_lStack->top())
								{
									m_hanoiDB->m_lStack->push(m_hanoiDB->m_mStack->top());
									m_hanoiDB->m_mStack->pop();
									iRecord = MToL;
									return 1;
								}
								return 0;
								
	}
		break;
	case HanoiSolution::MToR:
	{
								if (m_hanoiDB->m_mStack->empty())
									return 0;
								if (m_hanoiDB->m_rStack->empty() || m_hanoiDB->m_mStack->top() < m_hanoiDB->m_rStack->top())
								{
									m_hanoiDB->m_rStack->push(m_hanoiDB->m_mStack->top());
									m_hanoiDB->m_mStack->pop();
									iRecord = MToR;
									return 1;
								}
								return 0;
	}
		break;
	case HanoiSolution::RToM:
	{
								if (m_hanoiDB->m_rStack->empty())
									return 0;
								if ( m_hanoiDB->m_rStack->top() > m_hanoiDB->m_mStack->top())
								{
									return 0;
								}
								m_hanoiDB->m_mStack->push(m_hanoiDB->m_rStack->top());
								m_hanoiDB->m_rStack->pop();
								iRecord = RToM;
								return 1;
	}
		break;
	default:
		break;
	}
	return 0;
}
