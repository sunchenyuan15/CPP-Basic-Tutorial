#include<iostream>

using namespace std;

void test()
{
    string str1;
    str1 = "chenyuan";
    cout << str1 << endl;

    string str2;
    str2 = str1;
    cout << str2 << endl;

    string str3;
    str3 = 's';
    cout << str3 << endl;

    string str4;
    str4.assign("xiaoya");
    cout << str4 << endl;

    string str5;
    str5.assign("xiaoya", 2);
    cout << str5 << endl;

    string str6;
    str6.assign(str5);
    cout << str6 << endl;

    string str7;
    str7.assign(10, 's');
    cout << str7 << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

