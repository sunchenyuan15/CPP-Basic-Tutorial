#include<iostream>

using namespace std;


class Person
{
public:
    Person(int age)
    {
        //this指针指向 被调用的成员函数 所属的对象
        //this指向person1
        this->age = age;
    }
    Person& add(Person &person)
    {
        this->age += person.age;
        //this指向person2的指针 *this是person2本身
        return *this;
    }
    int age;
};

//解决名称冲突
void test()
{
    Person person1(26);
    cout << person1.age << endl;
}

//返回对象本身用*this
void test2()
{
    Person person1(10);
    Person person2(10);
    
    //链式编程
    person2.add(person1).add(person1).add(person1);
    cout << person2.age << endl;
}

int main(int argc, char const *argv[])
{
    test();
    test2();
    return 0;
}

