#include<iostream>

using namespace std;

class class1
{
    int number;  //默认权限 private
};

struct class2
{
    int number;  //默认权限 public
};

int main(int argc, char const *argv[])
{
    class1 c1;
    // c1.number = 10;  //fail

    class2 c2;
    c2.number = 10;
    return 0;
}

