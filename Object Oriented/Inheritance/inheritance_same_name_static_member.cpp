#include<iostream>

using namespace std;

class Base
{
private:
    /* data */
public:
    Base(/* args */);
    ~Base();
    static void func()
    {
        cout << "Base static func()" << endl;
    }
    static void func(int a)
    {
        cout << "Base static func(int a)" << endl;
    }
    static int m_A;
};

int Base::m_A = 10;

Base::Base(/* args */)
{
}

Base::~Base()
{
}

class case1:public Base
{
public:
    static void func()
    {
        cout << "case1 static func()" << endl;
    }
    static int m_A;
};

int case1::m_A = 20;

//same name static member attribute
void test()
{
    //通过对象访问
    case1 case11;
    cout << "case11.m_A:" << case11.m_A << endl;
    cout << "Base.m_A:" << case11.Base::m_A << endl;

    //通过类名访问
    cout << "case11.m_A:" << case1::m_A << endl;
    cout << "Base.m_A:" << case1::Base::m_A << endl;    //通过类名方式访问父类作用域下m_A
}

//same name static member behavior
void test2()
{
    //通过对象访问
    case1 case11;
    case11.func();
    case11.Base::func();
    //访问函数重载
    case11.Base::func(1);


    //通过类名访问
    case1::func();
    case1::Base::func();
    //访问函数重载
    case1::Base::func(1);
}

int main(int argc, char const *argv[])
{
    // test();
    test2();    
    return 0;
}

