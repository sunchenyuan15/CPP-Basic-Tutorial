#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int a);
    Person(const Person &person1);

    ~Person();
    int age;
};

//Parameterless Constructor
Person::Person(/* args */)
{
    cout << "Parameterless Constructor" << endl;
}

//Parametric Constructor
Person::Person(int a)
{
    age = a;
    cout << "Parametric Constructor" << endl;
}

//Copied Constructor
Person::Person(const Person &person1) //记住就行
{
    age = person1.age;
    cout << "Copied Constructor" << endl;
}

Person::~Person()
{
    cout << "Destructor" << endl;
}

int main(int argc, char const *argv[])
{
    //calling method classification 

    //Parenthesis call
    // Person person1;
    // Person person2(10);
    // Person person3(person2);

    //show call
    // Person person1;
    // Person person2 = Person(10);
    // Person person3 = Person(person2);

    /*  
        //匿名对象(没有名字的对象)//执行完这一行, 系统立即回收匿名对象
        Person(10);     

        //禁止使用拷贝构造函数 初始化匿名对象, 编译器误认为Person(person2) 是 Person person2(对象声明), 报错:重定义
        Person(person2);
    */

    //Implicit conversion method    隐式转换法
    Person person4 = 20;    //等价于Person person4 = Person(20);
    Person person5 = person4;

    // cout << "p2:" << person2.age << endl;
    // cout << "p3:" << person3.age << endl;
    cout << "p4:" << person4.age << endl;
    cout << "p5:" << person5.age << endl;
    return 0;
}

