 ///
 /// @file    overload.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 18:10:31
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int add(int a, int b)
{
	return a + b;
}

int add(int a, int b, int c)
{
	return a + b + c;
}

int add(double a, double b, double c)
{
	return a + b + c;
}

void func1()
{}

int main()
{
	int x = 1, y = 2 ,z = 3;
	cout << add(x, y) <<endl;
	cout << add(x,y,z) <<endl;

	return 0;
}
