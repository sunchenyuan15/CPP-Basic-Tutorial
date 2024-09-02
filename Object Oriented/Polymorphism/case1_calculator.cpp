#include<iostream>

using namespace std;

//polymorphism
class calculator
{
public:
    virtual int Result()
    {
        return 0;
    }
    int m_num1;
    int m_num2;
};

class Add:public calculator
{
    virtual int Result()
    {
        return m_num1 + m_num2;
    }
};

class Subtract:public calculator
{
    virtual int Result()
    {
        return m_num1 - m_num2;
    }
};

class Multiply:public calculator
{
    virtual int Result()
    {
        return m_num1 * m_num2;
    }
};

class Divide:public calculator
{
    virtual int Result()
    {
        return m_num1 / m_num2;
    }
};

int main(int argc, char const *argv[])
{
    calculator *cal = new Add;    //父类指针指向子类对象
    cal->m_num1 = 10;               //去子类中寻找具体实现
    cal->m_num2 = 10;
    cout << cal->Result() << endl;
    delete cal;                     //释放堆区数据, 指针类型没有变化(还是父类指针)

    cal = new Subtract; 
    cal->m_num1 = 15;
    cal->m_num2 = 5;
    cout << cal->Result() << endl;
    delete cal;
    return 0;
}

