#include<iostream>
#include<vector>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};


//vector容器存放自定义数据类型
void test()
{
    vector<Person> vec;
    Person person1("chenyuan", 24);
    Person person2("xiaoya", 24);
    Person person3("yilin", 23);

    vec.push_back(person1);
    vec.push_back(person2);
    vec.push_back(person3);

    for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        //it 迭代器可理解为指针
        //(*it)是<>内的数据类型, 是Person数据类型
        cout << "name:" << (*it).m_name << " " << "age:" << (*it).m_age << " " << endl;
        cout << "name:" << it->m_name << " " << "age:" << it->m_age << " " << endl;
    }
}


//vector容器存在自定义数据类型: 指针
void test2()
{
    vector<Person *> vec;
    Person person1("chenyuan", 24);
    Person person2("xiaoya", 24);
    Person person3("yilin", 23);

    vec.push_back(&person1);
    vec.push_back(&person2);
    vec.push_back(&person3);

    for (vector<Person *>::iterator it = vec.begin(); it != vec.end(); it++)
    {   
        //it 迭代器可理解为指针
        //(*it)是<>内的数据类型, 是Person *数据类型
        cout << "name:" << (*it)->m_name << " " << "age:" << (*it)->m_age << " " << endl;
    }
    
}
int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}
