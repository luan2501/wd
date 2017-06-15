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

	Computer(Computer & rhs)//加const应对右值引用
	: _brand(new char[strlen(rhs._brand)+1])
	, _price(rhs._price)
	{
		strcpy(_brand,rhs._brand);
		cout << "Computer(const Computer &)" << endl;
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

int main()
{
	Computer comm("Mac",999.9);
	comm.print();

	Computer comm2 = comm;
	comm2.print();

	//Computer comm3 = Computer("PC",1000);
	//comm3.print();

	
	Computer comm4(comm);
	comm4.print();

	return 0;
}


