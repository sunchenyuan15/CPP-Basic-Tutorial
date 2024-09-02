#include<iostream>
#include<functional>

using namespace std;

void test()
{
    negate<int> neg;
    cout << neg(50) << endl;
}


void test2()
{
    plus<int> plu;
    cout << plu(10, 20) << endl;
}


int main(int argc, char const *argv[])
{
    test();
    test2();
    
    return 0;
}
