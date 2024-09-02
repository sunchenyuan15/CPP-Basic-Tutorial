#include<iostream>

using namespace std;

class Building
{

    //类做友元, 可以访问类中私有成员
    friend class Companion;
private:
    /* data */
    string m_bedroom;
public:
    Building(/* args */);
    ~Building();
    string m_living_room;
};


Building::Building(/* args */)  //constructor                                                                                                           
{
    m_living_room = "living_room";
    m_bedroom = "bedroom";
}

Building::~Building()
{
}


class Companion
{
private:
    /* data */
public:
    Companion(/* args */);
    ~Companion();
    void func();
    Building *building;
};

Companion::Companion(/* args */)    //constructor
{
    //创建building对象, 会调用Building构造函数
    building = new Building();
}

Companion::~Companion()
{
}

void Companion::func()
{
    cout << building->m_living_room << endl;
    cout << building->m_bedroom << endl;
}

int main(int argc, char const *argv[])
{
    Companion companion1;   //创建companion1对象, 会调用Companion构造函数
    companion1.func();
    return 0;
}

