 ///
 /// @file    Point.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 20:18:01
 ///
#include <math.h>

#include <iostream>
using std::cout;
using std::endl;

class Point
{
	friend float distance(const Point & lhs, const Point & rhs);

public:
	Point(int ix = 0, int iy = 0)
	:_ix(ix)
	,_iy(iy)
	{}

	void print()
	{
		cout << "(" << _ix << "," << _iy <<endl;
	}

private:
	int _ix;
	int _iy;
};

float distance(const Point & lhs, const Point & rhs)
{
	return sqrt((lhs._ix-rhs._ix)*(lhs._ix-rhs._ix) +
		(lhs._iy-rhs._iy)*(lhs._iy-rhs._iy));
}

int main()
{
	Point a(0,0);
	Point b(3,4);
	cout << distance(a,b) << endl;
}




