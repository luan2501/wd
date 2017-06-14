 ///
 /// @file    namespace2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 13:48:42
 ///


#include <iostream>
using std::cout;
using std::endl;

int num = 100;

void f1()
{
	cout << "::f1()" <<endl;
}

namespace A
{
int num = 10;


void func(int num)
{
	cout << "函数之中num：" << num <<endl;
	cout << "A::num:" << A::num << endl;
	cout << "匿名空间的num：" << ::num <<endl;
}

}//end of namespace A


int main()
{
	A::func(3);
	::f1();

	return 0;
}
