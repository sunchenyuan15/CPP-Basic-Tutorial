#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
    void set_name(string name)
    {
        m_name = name;
    }
    string get_name()
    {
        return m_name;
    }


    void set_age(int age)
    {
        if(age < 0 || age > 100)
        {
            cout << "wrong age" << endl;
            return;
        }
        m_age = age;
    }
    int get_age()
    {
        if(m_age > 0 && m_age < 100)
        {
            return m_age;
        }
        return -1;
        
    }


    void set_id(int id)
    {
        m_id = id;
    }

private:    
    string m_name;  //可读可写
    int m_age;      //只读 --->可读, 可写: 0-100
    string m_id;    //只写
};

int main(int argc, char const *argv[])
{
    Person person1;
    person1.set_name("chenyuan");
    cout << person1.get_name() << endl;
    person1.set_age(120);
    cout << person1.get_age() << endl;
    person1.set_id(1115);
    return 0;
}

