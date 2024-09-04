#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    bool operator==(const Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
            return false;        
    }
    string m_name;
    int m_age;

};


void test1()
{
    vector<int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    vector<int>::iterator it = find(vec.begin(), vec.end(), 5);
    if (it == vec.end())
    {
        cout << "not found integer" << endl;
    }
    else    
        cout << *it << endl;
}


void test2()
{
    vector<Person> vec;
    Person person1("chenyuan", 24);
    Person person2("xiaoya", 25);
    Person person3("yilin", 22);
    Person person4("fulin", 24);
    vec.push_back(person1);
    vec.push_back(person2);
    vec.push_back(person3); 
    vec.push_back(person4);

    Person person5("chenyuan", 24);

    vector<Person>::iterator it = find(vec.begin(), vec.end(), person5);
    if (it == vec.end())
    {
        cout << "not found person" << endl;
    }
    else    
        cout << "name:" << it->m_name << " age:" << it->m_age << endl;
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
