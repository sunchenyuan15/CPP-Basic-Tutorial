#include<iostream>

using namespace std;

void func(int &ref) //essence: int *const ref = &a;
{
    ref = 100;  //essence: *ref
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int &ref = a;   //essence: int *const ref = &a; pointer constant
    ref = 20;       //essence: *ref = 20;

    cout << a << endl;
    cout << ref << endl;    //essence: *ref

    func(a);
    cout << a << endl;
    return 0;
}
