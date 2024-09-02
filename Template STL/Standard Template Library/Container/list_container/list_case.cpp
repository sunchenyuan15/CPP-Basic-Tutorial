#include<iostream>
#include<list>
using namespace std;

class Person
{
public:
    Person(string name, int age, int height)
    {
        m_name = name;
        m_age = age;
        m_height = height;
    }
    string m_name;
    int m_age;
    int m_height;
};

bool compare(Person &person1, Person &person2)
{
    
    //如年龄相同按照身高降序排序
    if (person1.m_age == person2.m_age)
    {
        return person1.m_height > person2.m_height;        
    }
    //按照年龄 升序
    else
        return person1.m_age < person2.m_age;
}

//按照年龄升序排序，如年龄相同按照身高降序排序
void test()
{
    list<Person> lst;
    Person person1("fulin", 24, 170);
    Person person2("xiaoya", 25, 163);
    Person person3("yilin", 22, 162);
    Person person4("chenyuan", 24, 178);

    lst.push_back(person1);
    lst.push_back(person2);
    lst.push_back(person3);
    lst.push_back(person4);

    for (list<Person>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        cout << "name:" << (*it).m_name << " age:" << (*it).m_age << " height:" << (*it).m_height << endl;
    }

    cout << "after sort:" << endl;

    lst.sort(compare);
    for (list<Person>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        cout << "name:" << (*it).m_name << " age:" << (*it).m_age << " height:" << (*it).m_height << endl;
    }
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

