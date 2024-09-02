#include<iostream>

using namespace std;

//重载关系运算符(==, !=)
class Person
{
private:
    /* data */
public:
    Person(string name, int age);
    ~Person();
    bool operator==(Person &p);
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


bool Person::operator==(Person &p)
{
    if (this->m_name == p.m_name && this->m_age == p.m_age)
    {
        return true;
    }
    else
        return false;
}


void test()
{
    Person person1("chenyuan", 23);
    Person person2("xiaoya", 23);
    cout << person1.m_name << endl << person1.m_age << endl;
    cout << person2.m_name << endl << person2.m_age << endl;

    if (person1 == person2)
    {
        cout << "p1=p2" << endl;
    }
    else
        cout << "p1!=p2" << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

