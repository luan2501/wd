 ///
 /// @file    new.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 15:50:40
 ///

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

int global = 10;

int * test(void)
{
	int a = 10;
	int b = 20;

	int static c =10;

	int * pa = (int*)malloc(sizeof(int));
	memset(pa, 0, sizeof(int));
	*pa = 1;
	return pa;
}

int main()
{
	int * pa =test();
	cout << "*pa =" << *pa << endl;
	free(pa);

	int * pb = new int (2);
	cout << "*pb = " << *pb << endl;
	delete pb;

	int * pc =new int[10];

	delete []pc;
	return 0;
	
}
