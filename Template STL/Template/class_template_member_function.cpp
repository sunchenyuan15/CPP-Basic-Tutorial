#include<iostream>

using namespace std;

class Person1
{
public:
    void print_info1()
    {
        cout << "person1" << endl;
    }
};

class Person2
{
public:
    void print_info2()
    {
        cout << "person2" << endl;
    }
};

template<class T>
class Person
{
public:
    T obj;
    void func1()
    {
        obj.print_info1();
    }
    void func2()
    {
        obj.print_info2();
    }
};

void test()
{
    Person<Person1> person;  //显示指定类型
    person.func1();
    // person.func2();      //编译时出错，说明：类模板中的成员函数在调用时创建
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
