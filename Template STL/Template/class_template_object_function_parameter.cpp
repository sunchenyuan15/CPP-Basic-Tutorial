#include<iostream>

using namespace std;

template<class T1, class T2>
class Person 
{
public:
    Person(T1 name, T2 age)
    {
        m_name = name;
        m_age = age;
    }
    void print_info()
    {
        cout << "name:" << m_name << endl << "age:" << m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};

//类模板对象做函数参数
//1.指定传入类型
void print_person(Person<string, int> &person)
{
    person.print_info();
}
void test1()
{
    Person<string, int> person("chenyuan", 24);
    print_person(person);
}

//2.参数模板化
template<class T1, class T2>
void print_person2(Person<T1, T2> &person)
{
    person.print_info();
    //查看通用数据类型的具体类型
    cout << "T1 type:" << typeid(T1).name() << endl;
    cout << "T2 type:" << typeid(T2).name() << endl;
}
void test2()
{
    Person<string, int> person2("xiaoya", 24);
    print_person2(person2);

}

//3.整个类模板化
template<class T>
void print_person3(T &person)
{
    person.print_info();
    cout << "T type:" << typeid(T).name() << endl;
}
void test3()
{
    Person<string, int> person3("yilin", 24);
    print_person3(person3);
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    test3();
    return 0;
}
