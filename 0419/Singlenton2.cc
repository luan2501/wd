 ///
 /// @file    Singlenton.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 23:04:53
 ///
#include <stdio.h>

#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
private:
	class AutoRelease
	{
	public:
		AutoRelease()
		{
			cout << "AutoRelease()" << endl;
		}
		~AutoRelease()
		{
			cout << "~AutoRelease()" << endl;
			if(_pInstance)
				delete _pInstance;
		}
	};

public:
	static Singleton * getInstance()
	{
		if(NULL == _pInstance)
			_pInstance = new Singleton;
		return _pInstance;
	}

private:
	Singleton()
	{
		cout << "Singleton()" << endl;
	}
	~Singleton()
	{
		cout << "~Singleton()" << endl;
	}


private:
	static Singleton *_pInstance;
	static AutoRelease _autoRelease;
};

Singleton * Singleton::_pInstance = getInstance();
Singleton::AutoRelease Singleton::_autoRelease;

int main()
{
	Singleton * p1 = Singleton::getInstance();
	Singleton * p2 = Singleton::getInstance();
	
	printf("p1地址为：%p\n",p1);
	printf("p2地址为：%p\n",p2);


	return 0;
}

