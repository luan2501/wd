 ///
 /// @file    StackStudent.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 15:52:40
 ///
#include <stdlib.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

class Student
{
public:
	Student(int no, const char * name)
	:_no(no)
	,_name(new char[strlen(name)+1])
	{
		cout << "Student(int no, const char * name)" << endl;
		strcpy(_name,name);
	}

	void print()
	{
		cout << _no << endl;
		cout << _name << endl << endl;
	}
#if 1
	void destroy()
	{
		cout << "void destroy()" << endl;
		delete this;
	}
#endif

private:
	~Student()
	{
		cout << "~Student()" << endl;
		delete []_name;
	}



private:
	int _no;
	char * _name;
};

int main()
{
	//Student s(1,"abc");
	//s.print();

	Student * ps = new Student(2,"bbb");
	ps->destroy();
	//delete ps;


	return 0;
}
