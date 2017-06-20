 ///
 /// @file    virtual4.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-20 11:18:29
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class A
{
virtual void f1() {cout << "A::f1()" << endl;}			

};

class B : public A
{
void f1() {cout << "B::f1()" << endl;}
virtual void f2() {cout << "B::f2()" << endl;}

};

int main()
{
	A a;
	B b;
	cout << "sizeof(a)" << sizeof(a) << endl;
	cout << "sizeof(b)" << sizeof(b) << endl;

	return 0;
}

