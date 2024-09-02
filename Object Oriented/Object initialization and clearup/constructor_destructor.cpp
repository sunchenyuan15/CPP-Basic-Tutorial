#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    ~Person();
};

Person::Person(/* args */)
{
    cout << "Constructor" << endl;
}

Person::~Person()
{
    cout << "Destructor" << endl;
}

int main(int argc, char const *argv[])
{
    Person person1; //create object
    
    return 0;
}

