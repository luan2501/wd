 ///
 /// @file    static_cast.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 20:05:08
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int test()
{
	int a = 10;
	double b = (double)a;
	double c = double(a);
	cout << "b = " << b <<endl;
	cout << "c = " << c <<endl;

	return 0;
}

int main()
{
	test();
	const double a = 2.1;
	int b =static_cast<int>(a);
	cout << b << endl;
	return 0;
}
