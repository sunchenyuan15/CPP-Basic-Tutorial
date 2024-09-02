#include<iostream>
#include<queue>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

int main(int argc, char const *argv[])
{
    queue<Person> que;

    Person person1("chenyuan", 24);
    Person person2("xiaoya", 25);
    Person person3("yilin", 22);
    Person person4("fulin", 24);

    que.push(person1);
    que.push(person2);
    que.push(person3);
    que.push(person4);

    cout << "size:" << que.size() << endl;
    
    while (!que.empty())
    {
        //队头
        cout << "name:" << que.front().m_name << " age:" << que.front().m_age << endl;
        
        //队尾
        cout << "name:" << que.back().m_name << " age:" << que.back().m_age << endl;
        cout << endl;

        que.pop();
    }
    
    cout << "size:" << que.size() << endl;
    return 0;
}
