#include<iostream>

using namespace std;

template<class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age);

    void print_info();

    T1 m_name;
    T2 m_age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    m_name = name;
    m_age = age;
}

template<class T1, class T2>
void Person<T1, T2>::print_info()
{
    cout << "name:" << m_name << " age:" << m_age << endl;    
}
