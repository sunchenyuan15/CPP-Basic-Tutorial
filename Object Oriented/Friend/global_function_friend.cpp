#include<iostream>

using namespace std;

class Building
{

    //全局函数做友元, 可以访问类中的私有成员
    friend void Func(Building *building);
public:
    Building()
    {
        m_living_room = "living_room";
        m_bedroom = "bedroom";
    }
    string m_living_room;

private:
    string m_bedroom;

};

void Func(Building *building)
{
    cout << building->m_living_room << endl;
    cout << building->m_bedroom << endl;
}

int main(int argc, char const *argv[])
{
    Building building1;
    Func(&building1);
    return 0;
}

