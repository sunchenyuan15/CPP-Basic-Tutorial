#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
    string name;
protected:
    string car;
private:
    int credit_card;

public:
    void set()
    {
        name = "suncy";
        car = "volkswagen";
        credit_card = 123465;
    }    
};


int main(int argc, char const *argv[])
{
    Person person1;
    person1.set();
    cout << person1.name << endl;
    // person1.car;//fail
    // person1.credit_card;//fail
    return 0;
}

