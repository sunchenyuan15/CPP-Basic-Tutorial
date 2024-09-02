#include<iostream>

using namespace std;

void test()
{
    string str1 = "chen";
    str1 += "yuan";
    cout << str1 << endl;

    str1 += 'x';
    cout << str1 << endl;

    string str2 = "xiaoya";
    str1 += str2;
    cout << str1 << endl;

    string str3 = "C";
    str3.append("++");
    cout << str3 << endl;

    str3.append(" is an object oriented programming language", 13);
    cout << str3 << endl;

    str3.append(" oriented");
    cout << str3 << endl;

    str3.append(" programming language", 12, 6);    //从第12个字符开始, 连接6个字符
    cout << str3 << endl;


}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
