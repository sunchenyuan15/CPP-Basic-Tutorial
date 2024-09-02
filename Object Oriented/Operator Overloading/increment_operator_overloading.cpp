#include<iostream>

using namespace std;

class Integer
{
    friend ostream &operator<<(ostream &cout, const Integer &integer);
private:
    int m_Num;
public:
    Integer(/* args */);
    ~Integer();

    //重载前置递增运算符
    Integer &operator++()
    {
        //先递增
        m_Num++;
        //再返回
        return *this;
    }

    //重载后置递增运算符
    //int占位参数, 区分前置后置递增
    Integer operator++(int)
    {
        //先记录结果
        Integer temp = *this;   //temp局部对象
        //递增
        m_Num++;        
        //再返回结果
        return temp;
    }

};

Integer::Integer(/* args */)
{
    m_Num = 0;
}

Integer::~Integer()
{
}

//重载左移运算符: 全局函数法
ostream &operator<<(ostream &cout, const Integer &integer)
{
    cout << integer.m_Num;
    return cout;
}

void test()
{
    Integer integer;
    cout << ++(++integer) << endl;
    cout << integer << endl;
}

void test2()
{
    Integer integer;
    cout << integer++ << endl;
    cout << integer << endl;
}

int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}

