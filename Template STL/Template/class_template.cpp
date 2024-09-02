#include<iostream>

using namespace std;

template<class Name_Type, class Age_Type>
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
    Person<string, int> person1("chenyuan", 24);
    cout << person1.m_name << " " << person1.m_age << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
