#include<iostream>

using namespace std;

class Base
{
private:
    /* data */
public:
    Base(/* args */);
    ~Base();
};

Base::Base(/* args */)
{
    cout << "base constructor" << endl;
}

Base::~Base()
{
    cout << "base destructor" << endl;
}

class case1:public Base
{
public:
    case1()
    {
        cout << "case1 constructor" << endl;
    }
    ~case1()
    {
        cout << "case1 destructor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Base base1;
    case1 case11;    
    return 0;
}

