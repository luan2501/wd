 ///
 /// @file    inline.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 19:25:02
 ///
 
#include <iostream>
using std::cout;
using std::endl;

#define Max(a, b) (a) > (b) ? (a) : (b)

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int x = 3;
	int y = 4;
	cout << max(x, y) << endl;
//	cout << Max(x, y) << endl;
}
