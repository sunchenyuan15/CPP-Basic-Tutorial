#include<iostream>

using namespace std;

void test()
{
    string str;

    const char * str1 = "sunchenyuan";
    string str2(str1);
    cout << str2 << endl;

    string str3(str2);
    cout << str3 << endl;

    string str4(10, 's');
    cout << str4 << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
