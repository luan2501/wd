 ///
 /// @file    namespace.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 12:42:35
 ///
 
#include <iostream>

using namespace std;
namespace A
{
	void disA()
	{
		cout << "This is A" << endl;
	}
}
namespace B
{
	void dispB()
	{
		A::disA();
		cout << "This is B" << endl;
	}
}

int main()
{
	B::dispB();
	return 0;
}








