#pragma once

#include<iostream>

using namespace std;

template<class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age);

    void print_info();

    T1 m_name;
    T2 m_age;
};
