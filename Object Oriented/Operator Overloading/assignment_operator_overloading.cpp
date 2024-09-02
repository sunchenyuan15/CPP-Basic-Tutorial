#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(int age);
    ~Person();
    Person &operator=(Person &p);
    int *m_age;
};

//Constructor
Person::Person(int age)
{
    m_age = new int(age);
}

//Destructor
Person::~Person()
{
    if (m_age != nullptr)
    {
        delete(m_age);
        m_age = nullptr;
        /* code */
    }
    
}

//重载赋值运算符
Person &Person::operator=(Person &p)
{
    // m_age = p.m_age;    //浅拷贝: 编译器默认提供

    //先判断原来堆区是否有数据，如果有先释放
    if (m_age != nullptr)
    {
        delete(m_age);
        m_age = nullptr;
    }
    m_age = new int(*p.m_age);  //深拷贝

    //返回对象自身
    return *this;
}

void test()
{
    Person person1(24);
    Person person2(25);
    Person person3(26);

    //堆区内存重复释放导致程序崩溃了: 深拷贝解决该问题
    person1 = person2 = person3;    //链式编程

    cout << *person1.m_age << endl;
    cout << *person2.m_age << endl;
    cout << *person3.m_age << endl;

}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

