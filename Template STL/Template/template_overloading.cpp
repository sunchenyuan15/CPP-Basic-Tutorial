#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(string name, int age);
    ~Person();
    string m_name;
    int m_age;
};

Person::Person(string name, int age)
{
    m_name = name;
    m_age = age;
}

Person::~Person()
{
}

template<typename T>
bool Compare(T &a, T &b)
{
    if (a == b)
        return true;
    else 
        return false;
}

template<> bool Compare(Person &p1, Person &p2)
{
    if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
        return true;
    else 
        return false;    
}

void test()
{
    int a = 1, b = 1;
    bool ret = Compare(a, b);
    if (ret)
        cout << "a==b" << endl;
    else 
        cout << "a!=b" << endl;
}

void test2()
{
    Person person1("xiaozhao", 22);
    Person person2("xiaoqian", 23);

    bool ret = Compare(person1, person2);
    if (ret)
        cout << "person1==person2" << endl;
    else
        cout << "person1!=person2" << endl;
}

int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}

