 ///
 /// @file    point.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-15 18:58:42
 ///

#include <iostream>
using std::cout;
using std::endl;


class Point
{
public:
	Point(int ix, int iy, double & z)
	: _ix(ix) //对于引用数据成员，只能初始化列表之中进行
	, _iy(iy)
	, _ref1(_ix)
	, _ref2(z)
	{
		cout << "Point(int,int)" << endl;
	}


	Point(const Point & rhs)
	: _ix(rhs._ix)
	, _iy(rhs._iy)
	, _ref1(rhs._ref1)
	, _ref2(rhs._ref2)
	{
	
	}

	void print()
	{
		cout << "(" << _ix
			 << "," << _iy
			 << "," << _ref1
			 << "," << _ref2
			 << ")" << endl;
	}

	void setX(int ix)
	{
		_ix = ix;
	}
private:
	int _ix;
	int _iy;
	int & _ref1;
	double & _ref2;
};


int main(void)
{
	double z = 5.0;
	Point pt(3, 4, z);

	pt.print();

	Point pt2(pt);
	pt2.print();

	cout << "发生修改之后:" << endl;
	pt.setX(7);
	pt.print();
	pt2.print();

	cout << "修改z之后:" << endl;
	z = 6.0;
	pt.print();
	pt2.print();

}
 
