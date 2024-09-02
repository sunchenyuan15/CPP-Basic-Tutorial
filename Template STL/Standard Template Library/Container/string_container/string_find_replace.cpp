#include<iostream>

using namespace std;

//find
void test()
{
    string str1 = "sunchenyuansunchenyuan";

    cout << str1.find("chen") << endl;

    cout << str1.rfind("chen") << endl;


}

//replace
void test2()
{
    string str = "sunchenyuan";
    str.replace(0, 3, "yuanxiaoya");
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    test();
    // test2();
    return 0;
}
