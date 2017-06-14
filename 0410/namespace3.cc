 ///
 /// @file    namespace3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 12:54:19
 ///
 
#include <iostream>

using namespace std;

namespace A
{
	void dispA()
	{
		cout << "This is A" << endl;
	}
}

using A::dispA;

void dispEx()
{
	cout << "This is outside" << endl;
}

namespace B
{
	void dispB()
	{
		dispEx();
		dispA();
		cout << "This is B" << endl;
	}
}

int main()
{	
	B::dispB();
	dispA();

	return 0;
}










