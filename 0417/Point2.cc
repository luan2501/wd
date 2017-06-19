 ///
 /// @file    Point.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 20:18:01
 ///
#include <math.h>

#include <iostream>
using std::cout;
using std::endl;

class Line;

class Point
{
	friend Line;

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


class Line
{
public:
	void setPoint(Point & rhs, int ix, int iy)
	{
		rhs._ix = ix;
		rhs._iy = iy;
	}
};
int main()
{
	Point a(0,0);
	Point b(3,4);

	Line l;
	l.setPoint(a,1,1);
	a.print();
}


