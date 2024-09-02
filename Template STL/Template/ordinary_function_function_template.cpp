#include<iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

template<typename T>
T T_add(T a, T b)
{
    return a + b;
}

void test_add()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << add(a, c) << endl;
}

void test_T_add()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    //自动类型推导，无法隐式类型转换
    // cout << T_add(a, c) << endl;

    //显示指定类型
    cout << T_add<int>(a, c) << endl;
}

int main(int argc, char const *argv[])
{
    test_add();
    test_T_add();
    return 0;
}
