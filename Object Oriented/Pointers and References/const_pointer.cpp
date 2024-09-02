#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a{3};
    int b{4};

    const int *p{&a};
    int *const p1{&b};

    // *p = 5;  fail
    // p1 = &a; fail

}

