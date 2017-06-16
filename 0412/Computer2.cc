 ///
 /// @file    Computer2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-15 15:53:50
 ///

#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	Computer(const char * brand, double price)
	: _brand(new char[strlen(brand)+1])
	, _price(price)
	{
		cout << "Computer(const char *, double)"<< endl;
		strcpy(_brand, brand);
	}

	Computer(const Computer & rhs)//加const应对右值引用
	: _brand(new char[strlen(rhs._brand)+1])
	, _price(rhs._price)
	{
		strcpy(_brand,rhs._brand);
		cout << "Computer(const Computer &)" << endl;
	}

	Computer & operator=(const Computer & rhs)
	{
		cout <<"Computer & operator=(const Computer & rhs)" <<endl;

		if(this==&rhs)
			return *this;

		delete []_brand;

		_brand=new char[strlen(rhs._brand)+1];
		strcpy(_brand,rhs._brand);

		this->_price=rhs._price;
		return *this;
	}


	void print();

	~Computer()
	{
		delete []_brand;
	}
private:
	char * _brand;
	double _price;
};

void Computer::print()
{
	cout << _brand << " " << _price << endl; 
}

Computer func()
{
	Computer c("a",100);
	return c;
}

inline void func2(Computer c)
{
	c.print();
}


int main()
{
	Computer com("Mac",999.9);
	Computer com2("PC",555.5);

	com = com;
	com = com2;
	com2.print();
	
	return 0;
}


