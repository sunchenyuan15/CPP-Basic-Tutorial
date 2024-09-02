#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int age);
    Person(const Person &person);
    ~Person();
    int m_age;
};

Person::Person(/* args */)
{
    cout << "Parameterless Constructor" << endl;
}

Person::Person(int age)
{
    m_age = age;
    cout << "Parametric Constructor" << endl;
}

Person::Person(const Person &person)
{
    m_age = person.m_age;
    cout << "Copied Constructor" << endl;
}

Person::~Person()
{
    cout << "Destructor" << endl;
}


//● 使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{
    Person person1(22);
    Person person2(person1);
    cout << person2.m_age << endl;
}

//● 值传递的方式给函数参数传值
//  值传递的本质:拷贝临时的副本
void test2_1(Person p)
{

}

void test2()
{
    Person person3;     //默认构造函数
    test2_1(person3);   //拷贝构造函数
}

//● 以值方式返回局部对象: 会创建一个新的对象(引用方式返回不会创建一个新的对象)
//  函数执行完即释放局部对象
Person test3_1()
{
    Person p4_1;
    cout << "3_1:" << (int *)&p4_1 << endl;
    return p4_1;
}

void test3()
{
    Person p4 = test3_1();
    cout << "3:" << (int *)&p4 << endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test3();
    
    return 0;
}

