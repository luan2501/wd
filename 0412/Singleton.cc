 ///
 /// @file    Singleton.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-15 19:56:53
 ///
#include "stdio.h" 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton * getInstance()
	{
		if(NULL == _pInstance)
		{
			_pInstance = new Singleton;
		}
		return _pInstance;
	}

	static void destroy()
	{
		cout << "destroy" << endl;
		delete _pInstance;	
	}
	
private:
	Singleton(){}
	~Singleton(){}
private:
	static Singleton * _pInstance;		
};

Singleton * Singleton::_pInstance = NULL;

int main(void)
{
	Singleton * p1 =Singleton::getInstance();
	Singleton * p2 =Singleton::getInstance();

	


	if(p1==p2)
	{
		cout << "success" << endl;
	}
	Singleton::destroy();
}
