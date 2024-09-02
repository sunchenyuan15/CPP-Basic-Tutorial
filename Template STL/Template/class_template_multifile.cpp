#include<iostream>
#include"person.hpp"

using namespace std;

void test1()
{
    Person<string, int> person1("xiaoya", 24);
    person1.print_info();
}

int main(int argc, char const *argv[])
{
    test1();
    return 0;
}
