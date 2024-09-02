#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "sunchenyuan";
    str.insert(3, "xiaoya");
    cout << str << endl;

    str.erase(3, 6);
    cout << str << endl;


    return 0;
}
