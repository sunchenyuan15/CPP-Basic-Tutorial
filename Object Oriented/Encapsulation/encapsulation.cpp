#include<iostream>

using namespace std;

const double PI{3.14};

//类
class Circle
{
//访问权限: 公共权限
public:
    //属性: 变量
    //半径
    int radius;
    //行为: 函数
    //周长
    double perimeter(void)
    {
        return 2 * PI * radius;
    }
    void set_radius(int rad)
    {
        radius = rad;
    }
};


int main(int argc, char const *argv[])
{
    //创建对象(实例化)
    Circle circle;
    //给对象的属性赋值
    // circle.radius = 10;
    circle.set_radius(10);
    cout << "perimeter:" << circle.perimeter() << endl;
    
    return 0;
}

