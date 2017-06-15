 ///
 /// @file    reference2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 16:19:47
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void swap(int & ref1,int & ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int arr[5] = {0, 1, 2, 3, 4};

int & func(int idx)
{
	return arr[idx];
}

int & func2()
{
	int * pa = new int(4);
	return *pa;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a=" << a <<endl;	
	cout << "b=" << b <<endl;
	swap(a,b);
	cout << "a=" << a <<endl;
	cout << "b=" << b <<endl;
	func(2) = 5;
	cout << arr[2] << endl;

	int & ref =func2();
	cout << ref << endl;

	delete (&ref);
}
