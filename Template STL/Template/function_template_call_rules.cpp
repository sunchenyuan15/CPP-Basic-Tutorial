#include<iostream>

using namespace std;

void print_info(int a)
{
    cout << "function" << endl;
}

template<typename T>
void print_info(T a)
{
    cout << "function template" << endl;
}

template<typename T>
void print_info(T a, T b)
{
    cout << "function template overloading" << endl;
}

int main(int argc, char const *argv[])
{
    // print_info<>(1);
    // print_info<>(1, 1);

    print_info('a');
    return 0;
}

