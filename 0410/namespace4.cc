 ///
 /// @file    namespace4.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 13:03:51
 ///
 
#include <iostream>
using namespace std;

namespace A
{
	int num = 1;
}

void disp()
{
	using A::num;
	cout << num <<endl;
}

int main()
{
	disp();
	return 0;
}








