#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "sunchenyuan";

    //1.[]方式访问单个字符
    for (size_t i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    //2.at方式访问单个字符
    for (size_t i = 0; i < str.length(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    //修改单个字符
    str[0] = 'y';
    cout << str << endl;

    str.at(1) = 'x';
    cout << str << endl;

    return 0;
}
