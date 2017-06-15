 ///
 /// @file    Computer.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-15 15:07:23
 ///
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	void print()
	{
		cout << "品牌" << _brand <<endl;
		cout << "价格" << _fPrice <<endl;
	}

	void setBrand(const char * brand)
	{
		strcpy(_brand,brand);
	}

	void setPrice(double fPrice)
	{
		_fPrice=fPrice;
	}

private:
	char _brand[20];
	double _fPrice;

};

int main()
{
	Computer com;
	com.setBrand("Mac");
	com.setPrice(1999.9);
	return 0;
}
