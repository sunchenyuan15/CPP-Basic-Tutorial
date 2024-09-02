#include<iostream>

using namespace std;

//立方体类设计
//创建立方体类
//设计属性
//设计行为 获取立方体面积和体积
//分别利用成员函数 全局函数 判断两个立方体是否相等
class Cube
{
private:
    int m_l;
    int m_w;
    int m_h;
public:
    int set_get_length(int l)
    {
        m_l = l;
        return m_l;
    }
    int set_get_width(int w)
    {
        m_w = w;
        return m_w;
    }
    int set_get_height(int h)
    {
        m_h = h;
        return m_h;
    }

    int calcu_area()
    {
        return 2 * ((m_l * m_w) + (m_l * m_h) +(m_w * m_h));
    }
    int calcu_volume()
    {
        return m_l * m_w * m_h;
    }

    //成员函数判断相等
    bool check_for_equality_class(Cube &cube)
    {
        if ((m_l == cube.set_get_length(3)) 
        && (m_w == cube.set_get_width(4)) && (m_h == cube.set_get_height(5)))
        {
            return true;
        }
        return false;
    }

};

//全局函数判断相等
//值传递需要另外的内存空间  引用传递不需要
bool check_for_equality(Cube &cube1, Cube &cube2)
{
    if ((cube1.set_get_length(3) == cube2.set_get_length(3))
    && (cube1.set_get_width(4) == cube2.set_get_width(4)) && (cube1.set_get_height(5) == cube2.set_get_height(5)))
    {
        return true;
    }
    return false;    
}

int main(int argc, char const *argv[])
{
    Cube cube1;
    cube1.set_get_length(3);
    cube1.set_get_width(4);
    cube1.set_get_height(5);

    cout << "area:" << cube1.calcu_area() << endl;
    cout << "volume:" << cube1.calcu_volume() << endl;
    
    Cube cube2;
    cube2.set_get_length(3);
    cube2.set_get_width(4);
    cube2.set_get_height(5);

    cout << "equality:" << check_for_equality(cube1, cube2) << endl;
    cout << "equality_class:" << cube1.check_for_equality_class(cube1) << endl;
    return 0;
}

