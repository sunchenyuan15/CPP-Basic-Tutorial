#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a0{1};
    int a1{1};
    int a2{1};
    cout << &a0 << endl << &a1 << endl << &a2 << endl;
    
    int &&result = a0 + a1;
    cout << result << endl;
    return 0;
}
