#include<iostream>

using namespace std;


class Person
{
public:
    //常函数
    //const Person *const this;
    void Show() const
    {
        // this->m_A = 10; //fail
        // this = nullptr; //fail: this指针本质: 指针常量
        this->m_B = 11;
    }
    int m_A;
    mutable int m_B;    //关键字mutable, 在常函数中可以修改数值

    void func()
    {
        m_A = 12;
    }
};

void test()
{
    Person person1;
    person1.Show(); //此时this指针指向person1
}

void test2()
{
    //常对象
    const Person person2;
    // person2.m_A = 13;
    person2.m_B = 14;  //常对象也可以修改 mutable修饰的属性
    //常对象只能调用常函数
    person2.Show();
    // person2.func(); //fail

}

int main(int argc, char const *argv[])
{
    test2();
    return 0;
}
