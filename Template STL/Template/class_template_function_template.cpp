#include<iostream>

using namespace std;

template<class Name_Type, class Age_Type = int> //模板参数列表中有默认参数
class Person
{
public:
    Person(Name_Type name, Age_Type age)
    {
        m_name = name;
        m_age = age;
    }
    Name_Type m_name;
    Age_Type m_age;
};

void test()
{
    // Person person1("chenyuan", 24);              //无法自动类型推导
    Person<string, int> person1("chenyuan", 24);    //显示指定类型
    
    cout << person1.m_name << " " << person1.m_age << endl;
}

void test1()
{
    Person<string> person1("xiaoya", 24);    //显示指定类型
    cout << person1.m_name << " " << person1.m_age << endl;
}

int main(int argc, char const *argv[])
{
    // test();
    test1();
    return 0;
}

