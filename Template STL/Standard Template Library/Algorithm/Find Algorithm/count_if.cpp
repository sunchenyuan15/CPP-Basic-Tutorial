#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Greater_than_two
{
public:
    bool operator()(int value)
    {   
        return value > 2;
    }
};


void test1()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(4);
    
    cout << count_if(vec.begin(), vec.end(), Greater_than_two()) << endl;
}


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


class Greater_than_twenty
{
public:
    bool operator()(Person &p)
    {
        return p.m_age > 22;
    }
};


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

    Person person5("chenyuan1", 24);

    cout << count_if(vec.begin(), vec.end(), Greater_than_twenty());
}


int main(int argc, char const *argv[])
{
    test1();
    test2();
    
    return 0;
}
