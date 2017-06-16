 ///
 /// @file    point2.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 14:31:27
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	explicit
	Point(int ix = 0, int iy = 0)
	:_ix(ix)
	,_iy(iy)
	{
		cout << "Point(int, int)" << endl;
	}
	
	Point(const Point & rhs)
	:_ix(rhs._ix)
	,_iy(rhs._iy)
	{
		cout << "Point(const Point &)" << endl;
	}

	Point &	operator=(const Point & rhs)
	{
		cout << "Point & operator=(const Point & rhs)" << endl;
		this->_ix = rhs._ix;
		this->_iy = rhs._iy;
		return *this;
	}

	void print()
	{
		cout << this->_ix << "," << _iy <<endl;
	}
private:
	int _ix;
	int _iy;
};

int main()
{
	Point pt1(1,2);
	Point pt2 = pt1;
	Point pt3;
	pt3 = pt2;

	pt1.print();
	pt2.print();
	pt3.print();

}
