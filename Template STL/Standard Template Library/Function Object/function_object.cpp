#include<iostream>

using namespace std;

class Add
{
public:
    int operator()(int value1, int value2)
    {
        return value1 + value2;
    }
};

class Print
{
public:
    Print()
    {
        this->m_count = 0;
    }

    void operator()(string text)
    {
        cout << text << endl;
        this->m_count++;
    }

    int m_count;
};

void test1()
{
    Add add;    //函数对象
    cout << add(10, 20) << endl;
}

void test2()
{
    Print print;
    print("sunchenyuan");
    print("sunchenyuan");
    print("sunchenyuan");
    print("sunchenyuan");
    print("sunchenyuan");
    cout << print.m_count << endl;
}

void Print_info(Print &print, string str)
{
    print(str);
}

void test3()
{
    Print print;
    Print_info(print, "sunchenyuan");
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test3();

    return 0;
}
