 ///
 /// @file    defaultParameter.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 19:34:24
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int add(int a, int b = 1)
{
	return a + b;
}

int main()
{
	cout << add(1) << endl;
	return 0;
}
