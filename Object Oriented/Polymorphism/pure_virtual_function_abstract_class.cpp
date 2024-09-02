#include<iostream>

using namespace std;

class Base
{
public:
    //pure virtual function
    virtual void func() = 0;
};

class A:public Base
{
public:
    virtual void func()
    {
        cout << "func running" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *case1 = new A;    //父类指针指向子类对象
    
    /*指针接收地址，new A返回的是创建对象的首地址*/
    /*引用是起别名，不传地址，传对象*/

    case1->func();            //去子类中寻找具体实现
    delete case1;
    
    return 0;
}

