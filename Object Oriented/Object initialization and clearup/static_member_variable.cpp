#include<iostream>

using namespace std;

class Person
{
public:
    static int m_A; //静态成员变量  //类内声明
private:
    static int m_B;
};

int Person::m_A = 100;  //类外初始化
int Person::m_B = 120;


//静态变量访问方式
void access_static_member_variable()
{
    //1.通过对象访问
    Person person1;
    cout << person1.m_A << endl;
    
    //2.通过类名访问
    cout << Person::m_A << endl;
    // cout << Person::m_B << endl;    //fail

}

int main(int argc, char const *argv[])
{
    // Person person1;
    // cout << person1.m_A << endl;  

    // Person person2;
    // person2.m_A = 200;  //所有对象共享同一份数据

    // cout << person1.m_A << endl;

    access_static_member_variable();
    return 0;

}

