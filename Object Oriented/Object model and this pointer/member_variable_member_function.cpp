#include<iostream>

using namespace std;

class Person
{
    int m_A;   //非静态成员变量 属于类的对象上

    static int m_B;    //静态成员变量 不属于类的对象上
     
    void func(){

    };  //非静态成员函数 不属于类的对象上

    static void func2(){

    };  //静态成员函数 不属于类的对象上

    
};

int Person::m_B = 0;

int main(int argc, char const *argv[])
{
    Person person1;
    cout << sizeof(person1) << endl;
    return 0;
}

