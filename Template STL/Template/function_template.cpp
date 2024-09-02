#include<iostream>

using namespace std;

void swap_int(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_double(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}


template<typename T>    //声明一个模板，T是通用的数据类型
void swap_num(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    //普通函数
    // swap_int(a, b);

    //函数模板

    //1.自动类型推导
    swap_num(a, b);
    cout << "a:" << a << " " << "b:" << b << endl;

    //2.指定数据类型
    swap_num<int>(a, b);
    cout << "a:" << a << " " << "b:" << b << endl;

    return 0;
}

