 ///
 /// @file    Singleton_nest.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-04-20 11:08:26
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;


//第二种方法：饿汉式　+　atexit函数
class Singleton
{
public:
	static Singleton * getInstance()
	{
		if(_pInstance == NULL)
		{
			_pInstance = new Singleton;
			atexit(destroy);
		}
		return _pInstance;
	}

	static void destroy()
	{
		if(_pInstance)
			delete _pInstance;
	}

private:
	Singleton(){	cout << "Singleton()" << endl;}
	~Singleton(){	cout << "~Singleton()" << endl;}

private:
	static Singleton * _pInstance;
};

Singleton * Singleton::_pInstance = getInstance();


int main(void)
{
	Singleton *p1 = Singleton::getInstance();
	Singleton *p2 = Singleton::getInstance();

	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);

	return 0;
}
