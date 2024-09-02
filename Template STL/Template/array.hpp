#pragma once

#include<iostream>
using namespace std;

template<class T>
class Array
{
private:
    T *paddr;       //指向堆区开辟的真实数组
    int m_capacity; //数组容量
    int m_size;     //数组大小：实际元素的个数
public:
    Array(int capacity)
    {
        this->m_capacity = capacity;
        this->m_size = 0;
        this->paddr = new T[this->m_capacity];
        cout << "parametric constructor" << endl;
    }

    Array(const Array& array)
    {
        /*
        浅拷贝
       this->m_capacity = array.m_capacity;
       this->m_size = array.m_size;
       this->paddr = array.paddr
        */

       /*深拷贝*/
       this->m_capacity = array.m_capacity;
       this->m_size = array.m_size;
       this->paddr = new T[array.m_capacity];
       for (size_t i = 0; i < this->m_size; i++)
       {
        this->paddr[i] = array.paddr[i];
       }
       cout << "copied constructor" << endl;
    }

    void insert_element(const T &value)
    {
        if (this->m_size == this->m_capacity)
        {
            return ;
        }
        this->paddr[this->m_size] = value;
        this->m_size++;
    }
    
    void delete_element()
    {
        if (this->m_size == 0)
        {
            return ;
        }
        this->m_size--;
    }

    //访问数组元素
    //函数调用作为等号左值存在，需返回引用(反正数据本身)  (arr[0] = 1)
    T& operator[](int index)
    {
        return this->paddr[index];
    }

    //返回数组容量
    int get_capacity()
    {
        return this->m_capacity;
    }
    //返回数组的大小
    int get_size()
    {
        return this->m_size;
    }

    ~Array()
    {
        if (this->paddr != nullptr)
        {
            delete [] this->paddr;
            this->paddr = nullptr;
        }
        cout << "destructor" << endl;
    }

    Array& operator=(const Array& arrar)
    {
        /*先判断原来堆区是否有数据，如果有先释放*/
        if (this->paddr != nullptr)
        {
            delete [] this->paddr;
            this->paddr = nullptr;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        /*深拷贝*/
        this->m_capacity = arrar.m_capacity;
        this->m_size = arrar.m_size;
        this->paddr = new T[arrar.m_capacity];
        for (size_t i = 0; i < this->m_size; i++)
        {
            this->paddr[i] = arrar.paddr[i];
        }
        cout << "operator=" << endl; 
        return *this;   
            
    }
};

