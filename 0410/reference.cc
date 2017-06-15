 ///
 /// @file    reference.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 16:16:25
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a=10;
	int & refa = a;
	refa = 20;

	cout << "refa =" << refa <<endl;
	cout << "a =" << a <<endl;
}
