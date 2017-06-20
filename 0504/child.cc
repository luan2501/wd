 ///
 /// @file    child.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-19 23:18:52
 ///


#include <iostream>
using std::cout;
using std::endl;

class Base

{
public:
       virtual void display()//虚函数
       {
              cout << "Base::display()" << endl;
       }

       void print()
       {
              cout << "Base::print()" << endl;
       }
};

class Child : public Base
{
public:
       void display()//重定义
       {
              cout << "Child::display()" << endl;
       }

       void print()
       {
              cout << "Child::print()" << endl;
       }
};

int main(void)
{

       cout << "sizeof(Base) = " << sizeof(Base) << endl;
       cout << "sizeof(Child) = " << sizeof(Child) << endl;
       //指针调用，虚表，虚函数
       Base base;
       Base * pbase = &base;
       pbase->display();//base

       Child child;
       Child * pChild = &child;
       pChild->display();//child
       cout << endl;

       pbase = & child;
       pbase->display();//child
       pbase->print();//base非虚函数，指针调用，只跟其指针类型有关
       cout << endl;

       pChild = (Child*)&base;//pChild本身的类型是Child类型,打印的结果是基类的display()
                                            //占据的空间大小相同可以转（否则不可以）
       pChild->display();//base，只跟指向的对象有关
       pChild->print();//child

       return 0;
}

