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

//类模板 构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    m_name = name;
    m_age = age;
}

//类模板 成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::print_info()
{
    cout << "name:" << m_name << " age:" << m_age << endl;
}


int main(int argc, char const *argv[])
{
    Person<string, int> person("chenyuan", 24);
    person.print_info();
    return 0;
}
