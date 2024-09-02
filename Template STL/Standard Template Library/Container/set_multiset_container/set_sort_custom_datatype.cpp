#include<iostream>
#include<set>

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

class Descending_order
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        //降序(前者大)
        return p1.m_age > p2.m_age;
    }
};

void print_info(set<Person, Descending_order> &st)
{
    for (set<Person, Descending_order>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << "name:" << (*it).m_name << " age:" << (*it).m_age << endl;
    }
}


int main(int argc, char const *argv[])
{
    set<Person, Descending_order> st;

    Person person1("chenyuan", 24);
    Person person2("xiaoya", 25);
    Person person3("yilin", 22);
    
    st.insert(person1);
    st.insert(person2);
    st.insert(person3);

    print_info(st);
    return 0;
}
