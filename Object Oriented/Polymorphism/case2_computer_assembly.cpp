#include<iostream>

using namespace std;

//零件类
class CPU
{
public:
    virtual void calculate() = 0;
};


class RAM
{
public:
    virtual void storage() = 0;
};


class GPU
{
public:
    virtual void display() = 0;
};

//电脑类
class Computer
{
public:
    //constructor
    Computer(CPU *cpu, RAM *ram, GPU *gpu)
    {
        m_cpu = cpu;
        m_ram = ram;
        m_gpu = gpu;
    }
    void operate()
    {
        m_cpu->calculate();
        m_ram->storage();
        m_gpu->display();
    }
    ~Computer()
    {
        if (m_cpu != nullptr)
        {
            delete m_cpu;
            m_cpu = nullptr;
        }
        if (m_ram != nullptr)
        {
            delete m_ram;
            m_ram = nullptr;
        }
        if (m_gpu != nullptr)
        {
            delete m_gpu;
            m_gpu = nullptr;
        }
    }

private:    
    CPU *m_cpu;
    RAM *m_ram;
    GPU *m_gpu;
};

//厂商类
//OMEN
class OMENCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "omencpu calculate" << endl;
    }
};

class OMENRAM:public RAM
{
public:
    virtual void storage()
    {
        cout << "omenram storage" << endl;
    }
};

class OMENGPU:public GPU
{
    virtual void display()
    {
        cout << "omengpu display" << endl;
    }
};

//LEGION
class LEGIONCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "legioncpu calculate" << endl;
    }
};

class LEGIONRAM:public RAM
{
public:
    virtual void storage()
    {
        cout << "legionram storage" << endl;
    }
};

class LEGIONGPU:public GPU
{
    virtual void display()
    {
        cout << "legiongpu display" << endl;
    }
};

//测试1
void test()
{
    CPU *oemncpu = new OMENCPU; //父类指针指向子类对象
    RAM *oemnram = new OMENRAM;
    GPU *oemngpu = new OMENGPU;
    Computer *computer1 = new Computer(oemncpu, oemnram, oemngpu);
    computer1->operate();
    delete computer1;
}
//测试2
void test2()
{
    Computer *computer1 = new Computer(new LEGIONCPU, new LEGIONRAM, new LEGIONGPU);
    computer1->operate();
    delete computer1;
}

int main(int argc, char const *argv[])
{
    test();
    test2();
    return 0;
}
