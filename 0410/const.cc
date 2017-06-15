 ///
 /// @file    const.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-14 14:47:49
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
int z=300;
const int a = 100;
int const b = 200;
const int * const e =&a;
int * const c = &z;
int const * d = &b;

cout << a << " " << b << endl;
cout << *c << " " << *d <<endl; 

cout << *e << endl;
}
