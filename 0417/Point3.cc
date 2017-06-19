 ///
 /// @file    Point.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 20:18:01
 ///

#include <iostream>
using std::cout;
using std::endl;


class Point
{

public:
	Point(int ix = 0, int iy = 0)
	:_ix(ix)
	,_iy(iy)
	{}

	void print()
	{
		cout << "(" << _ix << "," << _iy << ")" << endl;
	}

	Point & operator += (const Point & rhs)
	{
		cout << "Point operator += (const Point & rhs)" << endl;
		this->_ix += rhs._ix;
		this->_iy += rhs._iy;

		return *this;
	} 
	
	Point & operator ++ ()
	{
		++_ix;
		++_iy;
		return *this;
	}

	Point operator ++ (int)
	{
		Point tmp(*this);
		++_ix;
		++_iy;
		return tmp;
	}

	friend std::ostream & operator << (std::ostream & os,const Point & rhs);
	friend std::istream & operator >> (std::istream & is,Point & lhs);

private:
	int _ix;
	int _iy;
};

std::ostream & operator << (std::ostream & os, const Point & rhs)
{
	os << "(" << rhs._ix << "," << rhs._iy << ")";
	return os;
}

std::istream & operator >> (std::istream & is, Point & rhs)
{
	is >> rhs._ix;
	is >>rhs._iy;
	return is;
}

Point operator + (const Point & lhs, const Point &rhs)
{
	cout << "Point operator + (const Point & lhs, const Point &rhs)" <<endl;
	Point temp(lhs);
	temp += rhs;
	return temp;
}

int main()
{
	Point a(1,1);
	Point b(3,4);
	Point c = a + b;
	cout << c <<endl;
	std::cin >> c;

	cout << c <<endl;

}


