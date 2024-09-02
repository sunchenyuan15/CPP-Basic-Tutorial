#include<iostream>

using namespace std;

class animal
{
public:
    int m_A;
};

class A:virtual public animal
{

};

class B:virtual public animal
{

};

class AB:public A, public B
{

};


int main(int argc, char const *argv[])
{
    AB case1;
    case1.A::m_A = 10;
    case1.B::m_A = 20;

    cout << case1.A::m_A << endl;
    cout << case1.B::m_A << endl;

    cout << case1.m_A << endl;

    return 0;
}

