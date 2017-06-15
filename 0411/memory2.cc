 ///
 /// @file    memory2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-15 14:50:46
 ///
#include <stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

int a = 10;

const int b = 20;

int main()
{
	int c = 30;
	const int d = 40;
	const char * p ="12345";

	printf("&a=%p\n",&a);
	printf("&b=%p\n",&b);
	printf("&c=%p\n",&c);
	printf("&d=%p\n",&d);
	printf("&p=%p\n",&p);
	printf("p=%p\n",p);
}
