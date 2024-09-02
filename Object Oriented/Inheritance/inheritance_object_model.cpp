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

class case1:public Base
{
public:
    int m_D;
};

int main(int argc, char const *argv[])
{
    cout << sizeof(case1) << endl;
    return 0;
}

