#include<iostream>

using namespace std;

class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

//public inheritance
class case1:public Base
{
public:
    void func()
    {
        m_A = 10;
        m_B = 20;
        // m_C = 30;   //fail
    }
};

void test1()
{
    case1 case11;
    case11.m_A = 100;
    // case11.m_B = 200;   //fail
}

//protected inheritance
class case2:protected Base
{
public:
    void func()
    {
        m_A = 10;
        m_B = 20;
    }
};

void test2()
{
    case2 case22;
    // case22.m_A = 100;   //fail
    // case22.m_B = 200;   //fail
}

//private inheritance
class case3:private Base
{
public:
    void func()
    {
        m_A = 10;
        m_B = 20;
    }
};

void test3()
{
    case3 case33;
    // case33.m_A = 100;   //fail
    // case33.m_B = 200;   //fail
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

