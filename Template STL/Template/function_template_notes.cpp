#include<iostream>

using namespace std;

template<typename T>
void func_print()
{
    cout << "func" << endl;
}

int main(int argc, char const *argv[])
{
    func_print<int>();    
    return 0;
}

