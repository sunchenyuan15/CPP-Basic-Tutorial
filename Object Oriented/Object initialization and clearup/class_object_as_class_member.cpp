#include<iostream>

using namespace std;

class Phone
{
public:
    Phone(string brand)
    {
        cout << "Phone constructor" << endl;
        m_brand = brand;
    }
    ~Phone()
    {
        cout << "Phone destructor" << endl;
    }
    string m_brand;

};

class Person
{
public:
    //Phone m_Phone = brand; //隐式转换法创建对象
    Person(string name, string brand):m_name(name), m_Phone(brand)
    {
        cout << "Person constructor" << endl;
    }
    string m_name;
    Phone m_Phone;
    ~Person()
    {
        cout << "Person destructor" << endl;
    }
};

//当其他类对象作为本类成员时
//构造顺序: 先构造类对象, 再构造自身
//析构顺序: 与构造相反

int main(int argc, char const *argv[])
{
    Person person1("suncy", "xiaomi");
    cout << person1.m_name << endl << person1.m_Phone.m_brand << endl;
    return 0;
}
