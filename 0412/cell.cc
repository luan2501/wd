//
 ///
 /// @file    cell.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-15 19:32:43
 ///

#include <iostream>
using std::cout;
using std::endl;


class Cell
{
public:
	Cell()
	: f(b), g(d)
	{}
private:
	int a;        //4
	char b;       //1
	float c;      //4
	double d;     //8
	short e[5];   //10
	char & f;     //8
	double & g;   //8
	static int h; //4
};

// 8+8+8+16+8+8

int main(void)
{
	cout << sizeof(Cell) << endl;

	return 0;
}

