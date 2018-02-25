#include "ConvexHull.h"

//
//#include <cstdio>  
//#include <cstring>  
//#include <cstdlib>  
//#include <algorithm>  
//#include <cmath>  
//using std::sort;
//#define MAXN 1002  
//int N, L;
//double  sqr(double a)
//{
//	return a*a;
//}
//struct Point
//{
//	double x, y;
//	inline Point operator- (const Point &t)
//	{
//		Point ret;
//		ret.x = x - t.x;
//		ret.y = y - t.y;
//		return ret;
//	}
//	inline Point operator+ (const Point &t)
//	{
//		Point ret;
//		ret.x = x + t.x;
//		ret.y = y + t.y;
//		return ret;
//	}
//	inline int det(const Point &t)
//	{
//		return x*t.y - t.x*y;
//	}
//	inline double dist(Point &t)
//	{
//		return sqrt(sqr(x - t.x) + sqr(y - t.y));
//	}
//}d[MAXN];
//
//bool cmpPoint(const Point &a, const Point &b)
//{
//	if (a.x != b.x) return a.x < b.x;
//	return a.y < b.y;
//}
//
//int convex[MAXN], cTotal;
//void get_convex_hull()
//{
//	sort(d, d + N, cmpPoint);
//	int Total = 0, tmp;
//	for (int i = 0; i<N; ++i)
//	{
//		while ((Total>1) &&
//			((d[convex[Total - 1]] - d[convex[Total - 2]]).det(
//			d[i] - d[convex[Total - 1]]) <= 0)) Total--;
//		convex[Total++] = i;
//	}
//	tmp = Total;
//	for (int i = N - 2; i >= 0; --i)
//	{
//		while ((Total > tmp) &&
//			((d[convex[Total - 1]] - d[convex[Total - 2]]).det(
//			d[i] - d[convex[Total - 1]]) <= 0)) Total--;
//		convex[Total++] = i;
//	}
//	cTotal = Total;
//}

//int main()
//{
//	scanf("%d%d", &N, &L);
//	for (int i = 0; i < N; ++i)
//	{
//		scanf("%lf%lf", &d[i].x, &d[i].y);
//	}
//	get_convex_hull();
//
//	return 0;
//}

//͹��-Grahamɨ��
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <cstdio>
using namespace std;

struct Point
{
	double x;
	double y;
}p[40000];

//��������С��0˵��p1��p2����ʱ�뷽��(�ұ�)����p0p1�ļ��Ǵ���p0p2�ļ���
double cross_product(Point p0, Point p1, Point p2)
{
	return (p1.x - p0.x)*(p2.y - p0.y) - (p2.x - p0.x)*(p1.y - p0.y);
}

//�������
double dis(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

bool com(const Point &p1, const Point &p2)
{
	double temp = cross_product(p[0], p1, p2);
	if (fabs(temp) < 1e-6)//������Ȱ��վ����С��������
	{
		return dis(p[0], p1) < dis(p[0], p2);
	}
	else
	{
		return temp > 0;
	}
}

vector<Point> graham_scan(int n)
{
	vector<Point> ch;
	int top = 2;
	int index = 0;
	for (int i = 1; i < n; ++i)//ѡ��Y������С�ĵ㣬��Y������ȣ�ѡ��X����С�ĵ�
	{
		if (p[i].y < p[index].y || (p[i].y == p[index].y && p[i].x < p[index].x))
		{
			index = i;
		}
	}
	swap(p[0], p[index]);
	ch.push_back(p[0]);
	//����������
	sort(p + 1, p + n, com);
	ch.push_back(p[1]);
	ch.push_back(p[2]);
	for (int i = 3; i < n; ++i)
	{
		while (top > 0 && cross_product(ch[top - 1], p[i], ch[top]) >= 0)
		{
			--top;
			ch.pop_back();
		}
		ch.push_back(p[i]);
		++top;
	}
	return ch;
}

//��ת���Ƿ�
double rotating_caliper(vector<Point> v)
{
	double max_dis = 0.0;
	int n = v.size();
	if (n == 2)
	{
		max_dis = dis(v[0], v[1]);
	}
	else
	{
		v.push_back(v[0]);
		int j = 2;
		for (int i = 0; i < n; ++i)
		{
			while (cross_product(v[i], v[i + 1], v[j]) < cross_product(v[i], v[i + 1], v[j + 1]))
			{
				j = (j + 1) % n;
			}
			max_dis = max(max_dis, max(dis(v[j], v[i]), dis(v[j], v[i + 1])));
		}
	}
	return max_dis;
}