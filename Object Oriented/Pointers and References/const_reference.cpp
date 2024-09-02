#include<iostream>

using namespace std;

void Print_Value(const int &ref)
{
    cout << ref << endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    Print_Value(a);

    return 0;
}
