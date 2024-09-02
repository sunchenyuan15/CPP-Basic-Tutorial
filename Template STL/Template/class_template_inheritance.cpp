#include<iostream>

using namespace std;

template<class T>
class parent
{
    T m;
};

class sub:public parent<int>
{

};



template<class T1, class T2>
class sub1:public parent<T1>
{
public:
    sub1()
    {
        cout << "T1 type:" << typeid(T1).name() << endl;
        cout << "T2 type:" << typeid(T2).name() << endl;
    }
    T2 obj;
};

void test1()
{
    sub subclass;
}

void test2()
{
    sub1<string, int> subclass;
}

int main(int argc, char const *argv[])
{
    test2();
    return 0;
}

