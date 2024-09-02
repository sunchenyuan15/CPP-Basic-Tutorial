#include<iostream>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person &person);
public:
    //constructor
    Person(int A, int B)
    {
        m_A = A;
        m_B = B;
    }
private:
    int m_A;
    int m_B;

};

//global_function_overloading
ostream &operator<<(ostream &cout, Person &person)  //引用传参, 不创建新的对象
{
    cout << "m_A:" << person.m_A << endl << "m_B:" << person.m_B << endl;
    return cout;
}

int main(int argc, char const *argv[])
{
    Person person1(10, 10);

    cout << person1 << "endl" << endl;  //链式编程
    return 0;
}

