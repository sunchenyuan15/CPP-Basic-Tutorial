#include<iostream>

using namespace std;

/*
提前告知编译器 Person类
*/
template<class T1, class T2>
class Person;

/*
提前告知编译器 全局函数模板
*/
//函数模板类外实现
template<class T1, class T2>
void print_info2(Person<T1, T2> &person)
{
    cout << "name:" << person.m_name << " age:" << person.m_age << endl;
}


template<class T1, class T2>
class Person
{
    //全局函数类内实现
    friend void print_info(Person<T1, T2> &person)
    {
        cout << "name:" << person.m_name << " age:" << person.m_age << endl;
    }

    //普通全局函数类内声明
    // friend void print_info2(Person<T1, T2> &person);
    //全局函数模板类内声明
    friend void print_info2<>(Person<T1, T2> &person);

public:

    Person(T1 name, T2 age)
    {
        m_name = name;
        m_age = age;
    }

private:
    T1 m_name;
    T2 m_age;
};

void test1()
{
    Person<string, int> person("chenyuan", 24);
    print_info(person);
}




void test2()
{
    Person<string, int> person("xiaoya", 24);
    print_info2(person);    
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
