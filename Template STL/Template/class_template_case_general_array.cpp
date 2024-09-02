#include<iostream>
#include"array.hpp"

using namespace std;

void print_array(Array<int> &arr)
{
    for (size_t i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test()
{
    Array<int> arr(10);
    for (size_t i = 0; i < 5; i++)
    {
        arr.insert_element(i);
    }
    cout << "arr1:" << endl;
    print_array(arr);
    cout << "arr capacity:" << arr.get_capacity() << endl;
    cout << "arr size:" << arr.get_size() << endl;

    
    Array<int> arr2(arr);
    cout << endl << "arr2:" << endl;
    print_array(arr2);
    arr2.delete_element();
    print_array(arr2);
    cout << "arr capacity:" << arr2.get_capacity() << endl;
    cout << "arr size:" << arr2.get_size() << endl;
}


class Person
{
public:
    Person(){}  //TODO:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

void test2()
{
    Array<Person> arr(10);
    Person person1("chenyuan", 24);
    Person person2("xiaoya", 24);
    Person person3("yilin", 24);

    arr.insert_element(person1);
    arr.insert_element(person2);
    arr.insert_element(person3);

    for (size_t i = 0; i < arr.get_size(); i++)
    {
        cout << "name:" << arr[i].m_name <<" " << "age:" << arr[i].m_age << endl;
    }
    cout << "arr capacity:" << arr.get_capacity() << endl;
    cout << "arr size:" << arr.get_size() << endl;
}

int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}
