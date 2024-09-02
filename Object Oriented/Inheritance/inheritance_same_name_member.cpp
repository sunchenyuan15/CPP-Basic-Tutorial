#include<iostream>

using namespace std;

class Base
{
private:
    /* data */
public:
    Base(/* args */);
    ~Base();
    void func()
    {
        cout << "Base func" << endl;
    }
    void func(int a)
    {
        cout << "Base func(int a)" << endl;
    }
    int m_A;
};

Base::Base(/* args */)
{
    m_A = 10;
}

Base::~Base()
{
}

class case1:public Base
{
public:
    case1()
    {
        m_A = 20;
    }
    void func()
    {
        cout << "case1 func" << endl;
    }
    int m_A;
};

int main(int argc, char const *argv[])
{
    case1 case11;
    // cout << "case1_m_A:" << case11.m_A << endl;
    // cout << "Base_m_A:" << case11.Base::m_A << endl;

    case11.func();
    case11.Base::func();

    case11.Base::func(1);
    return 0;
}

