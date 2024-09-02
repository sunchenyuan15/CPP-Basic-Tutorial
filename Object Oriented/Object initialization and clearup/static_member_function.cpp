#include<iostream>

using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 200;
        // m_B = 300;  //fail  
        cout << "static void func()" << endl;
    }
    static int m_A;
    int m_B;

private:
    static void func2()
    {
        cout << "static void func2()" << endl;
    }
};

int Person::m_A = 100;

void access_static_member_function()
{
    //通过对象访问
    Person person1;
    person1.func();
    //通过类名访问
    Person::func();
    // Person::func2(); //fail
}
int main(int argc, char const *argv[])
{
    access_static_member_function();
    return 0;
}

