#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int age);
    // Person(const Person &p);
    ~Person();
    int m_age;
};

Person::Person(/* args */)
{
    cout << "default constructor" << endl;
}

Person::Person(int age) 
{
    cout << "parametric constructor" << endl;
    m_age = age;
}

// Person::Person(const Person &p)
// {
//     cout << "copied constructor" << endl;
//     m_age = p.m_age;
// }

Person::~Person()
{
    cout << "default destructor" << endl;
}

int main(int argc, char const *argv[])
{
    Person person1;
    person1.m_age = 22;

    Person person2(person1);
    cout << person2.m_age << endl;
    return 0;
}

