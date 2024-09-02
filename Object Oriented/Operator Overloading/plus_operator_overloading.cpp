#include<iostream>

using namespace std;


//global_function_overloading

class Person
{
public:

    //member_function_overloading
    // Person operator+(Person &person)
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + person.m_A;
    //     temp.m_B = this->m_B + person.m_B;
    //     return temp;
    // }
    int m_A;
    int m_B;
};


//global_function_overloading
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p1.m_B;
    temp.m_B = p1.m_B + p1.m_B;
    return temp;
}

void test()
{
    Person person1;
    person1.m_A = 10;
    person1.m_B = 10;

    Person person2;
    person2.m_A = 20;
    person2.m_B = 20;

    Person person3 = person1 + person2;
    cout << "person3.m_A:" << person3.m_A << endl << "person3.m_B:" << person3.m_B << endl;
}


int main(int argc, char const *argv[])
{
    test();
    return 0;
}

