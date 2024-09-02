#include<iostream>

using namespace std;

class Base1
{
public:
    Base1()
    {
        m_A = 10;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A = 20;
    }
    int m_A;
};


class case1:public Base1, public Base2
{
public:
    case1()
    {
        m_C = 30;
        m_D = 40;
    }
    int m_C;
    int m_D;    
};

int main(int argc, char const *argv[])
{
    case1 case11;
    cout << sizeof(case1) << endl;

    cout << "Base1_m_A:" << case11.Base1::m_A << endl;
    cout << "Base2_m_A:" << case11.Base2::m_A << endl;

    return 0;
}

