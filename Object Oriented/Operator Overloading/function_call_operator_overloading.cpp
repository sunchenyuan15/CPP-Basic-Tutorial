#include<iostream>

using namespace std;

//函数调用运算符重载
class Print
{
private:
    /* data */
public:
    Print(/* args */);
    ~Print();
    void operator()(string str);
};

Print::Print(/* args */)
{
}

Print::~Print()
{
}

void Print::operator()(string str)
{
    cout << str << endl;
}

void test()
{
    Print print1;
    print1("hello world");  //类似函数调用
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

