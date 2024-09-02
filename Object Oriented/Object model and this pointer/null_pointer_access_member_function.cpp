#include<iostream>

using namespace std;

class Person
{
public:
    void ShowClassName()
    {
        cout << "Class Name:Person" << endl;
    }

    void ShowAge()
    {
        if (this == nullptr)
        {
            return ;
        }
        
        cout << "Age:" << this->m_age << endl;
    }
    int m_age;

};

void test()
{
    Person *ptr = nullptr;
    ptr->ShowClassName();
    ptr->ShowAge();
}

int main(int argc, char const *argv[])
{
    test();    
    return 0;
}

