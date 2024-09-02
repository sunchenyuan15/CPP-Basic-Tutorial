#include<iostream>

using namespace std;

void test1()
{
    pair<string, int> p("chenyuan", 24);
    cout << "name:" << p.first << " age:" << p.second << endl;

}

void test2()
{
    pair<string, int> p = make_pair("xiaoya", 24);
    cout << "name:" << p.first << " age:" << p.second << endl;
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
