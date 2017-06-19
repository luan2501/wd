 ///
 /// @file    string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-04-20 14:41:55
 ///
 
#include <stdio.h>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


//std::string并不是线程安全的

int main(void)
{
	string s1 = "hello,world";
	string s2 = s1;
	string s3 = s2;
	const char * p1 = s1.c_str();
	const char * p2 = s2.c_str();
	const char * p3 = s3.c_str();

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);

	s3[0] = 'X';
	cout << "发生修改之后:" << endl;
	p1 = s1.c_str();
	p2 = s2.c_str();
	p3 = s3.c_str();

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);

	cout << endl;
	cout << "读取s2[0]之后" << endl;
	cout << s2[0] << endl;
	p1 = s1.c_str();
	p2 = s2.c_str();
	p3 = s3.c_str();
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);

	return 0;
}

