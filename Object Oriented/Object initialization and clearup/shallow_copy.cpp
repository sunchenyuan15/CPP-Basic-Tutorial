#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int age, int height);
    ~Person();
    int m_age;
    int *m_height;
};

Person::Person(/* args */)
{
    cout << "default constructor" << endl;
}

Person::Person(int age, int height)
{
    m_age = age;
    m_height = new int(height);
    cout << "parametric construtor" << endl;
}

Person::~Person()
{
    //释放堆区开辟的空间
    if (m_height != nullptr)
    {
        delete(m_height);
        m_height = nullptr; //防止野指针的出现
    }
    
    cout << "default destructor" << endl;
}

//浅拷贝: 导致堆区的内存重复释放
int main(int argc, char const *argv[])
{
    Person person1(24, 182);
    cout << person1.m_age << " " << *person1.m_height << endl;

    Person person2(person1);    //如果使用编译器提供的拷贝构造函数, 会做浅拷贝操作
    cout << person2.m_age << " " << *person2.m_height << endl;
    return 0;
}

