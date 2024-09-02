#include<iostream>

using namespace std;

class Animal
{
public:

    //虚函数
    virtual void bark()
    {
        cout << "Animal bark" << endl;
    }
};

class Dog:public Animal
{
public:
    virtual void bark()
    {
        cout << "Dog barking" << endl;
    }
};

void func(Animal &animal)   //Animal &animal = dog 父类引用指向子类对象
{
    animal.bark();          //去子类中寻找具体实现
}

void size()
{
    Animal animal;
    cout << sizeof(animal) << endl;
}

int main(int argc, char const *argv[])
{
    Dog dog;
    func(dog);
    return 0;
}

