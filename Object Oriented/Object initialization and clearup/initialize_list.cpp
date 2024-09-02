#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:

    //初始化列表初始化属性
    Person(int a, int b, int c): m_A(a), m_B(b), m_C(c)
    {

    }
    ~Person();
    int m_A;
    int m_B;
    int m_C;  
};

Person::~Person()
{
}

int main(int argc, char const *argv[])
{

    Person person1(11, 12, 13);
    cout << person1.m_A << endl << person1.m_B << endl << person1.m_C << endl;
    return 0;
}

