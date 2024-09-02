#include<iostream>

using namespace std;

class Building;

class Companion
{
private:

public:
    Companion(/* args */);
    ~Companion();
    void func();
    void func2();
    Building *building;
};



class Building
{
    //成员函数做友元, 可以访问类中私有成员
    friend void Companion::func();
private:
    string m_bedroom;
public:
    Building(/* args */);
    ~Building();
    string m_living_room;
    
};
  
Building::Building(/* args */)
{
    m_living_room = "living_room";
    m_bedroom = "bedroom";
}

Building::~Building()
{
}



Companion::Companion(/* args */)
{
    building = new Building;
}

Companion::~Companion()
{
}

void Companion::func()
{
    cout << building->m_living_room << endl;
    cout << building->m_bedroom << endl;
}

void Companion::func2()
{
    cout << building->m_living_room << endl;
    // cout << building->m_bedroom << endl;
}

int main(int argc, char const *argv[])
{
    Companion companion1;
    companion1.func();
    // companion1.func2();
    return 0;
}

