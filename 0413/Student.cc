 ///
 /// @file    Student.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-16 15:19:25
 ///
#include <string.h>
#include <stdlib.h>

#include <iostream>
using std::cout;
using std::endl;

class Student
{

public:
	Student(int no,const char * name)
	:_no(no)
	{
		strcpy(_name,name);
		cout << "Student(int no, char * name)" << endl;
	}
			
	void * operator new(size_t size)
	{
		cout << "Student * operator new(size_t size)" << endl;
		void * p = malloc(size);
		return p;
	}

	void operator delete(void * p)
	{
		cout << "void operator delete(void * p)" << endl;
		free(p);
	}

private:
	int _no;
	char _name[20];
};


int main()
{
	Student *s1=new Student(1,"abc");
	delete s1;

}


