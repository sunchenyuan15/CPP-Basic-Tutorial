#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int age, int height);
    Person(const Person &person);
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

//自定义拷贝构造函数 
Person::Person(const Person &person)
{
    /*  浅拷贝
        编译器默认实现方式
    m_age = person.m_age;
    m_height = person.m_height;
    */

    m_age = person.m_age;
    m_height = new int(*person.m_height);   //深拷贝: new int(初值);
    cout << "copied constructor" << endl; 
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

//深拷贝
int main(int argc, char const *argv[])
{
    Person person1(24, 182);
    cout << person1.m_age << " " << *person1.m_height << endl;

    Person person2(person1);
    cout << person2.m_age << " " << *person2.m_height << endl;
    return 0;
}

