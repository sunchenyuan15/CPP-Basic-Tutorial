#include<iostream>
using namespace std;

void add1(int *const number)
{
    *number += 2;
}

void add2(int &number)
{
    number += 3;
}

int main(int argc, char const *argv[])
{
    int number{10};
    add1(&number);
    cout << "add1:" << number << " " << &number << endl; 
    add2(number);
    cout << "add2:" << number << " " << &number << endl;
    return 0;
}

