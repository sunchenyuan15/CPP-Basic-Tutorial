#include<iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal constructor" << endl;
    }

    //virtual destructor
    // virtual ~Animal()
    // {
    //     cout << "Animal virtual destructor" << endl;
    // }

    //pure virtual destructor
    virtual ~Animal() = 0;
    //pure virtual function
    virtual void bark() = 0;
};

//纯虚析构具体实现
Animal::~Animal()
{
    cout << "Animal pure virtual destructor" << endl;
}

class Dog:public Animal
{
public:
    Dog(string name)
    {
        cout << "Dog constructor" << endl;
        m_name = new string(name);
    }
    ~Dog()
    {
        cout << "Dog destructor" << endl;
        if (m_name != nullptr)
        {
            delete m_name;
            m_name = nullptr;
        }
        
    }
    virtual void bark()
    {
        cout << "Dog " << *m_name << " barking" << endl;
    }
    string *m_name;
};

int main(int argc, char const *argv[])
{
    Animal *animal = new Dog("Spike");
    animal->bark();
    delete animal;  //使用 new 分配的内存不会自动释放//必须显示删除对象才会调用析构函数

    return 0;
}

