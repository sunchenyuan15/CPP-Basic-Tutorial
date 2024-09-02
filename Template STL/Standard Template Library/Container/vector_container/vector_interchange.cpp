#include<iostream>
#include<vector>

using namespace std;

void print_info(vector<int> &vec)
{
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

//swap
void test()
{
    vector<int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    print_info(vec);

    vector<int> vec2;
    for (size_t i = 10; i > 0; i--)
    {
        vec2.push_back(i);
    }
    print_info(vec2);

    vec.swap(vec2);
    print_info(vec);
    print_info(vec2);
}


//使用swap收缩内存空间
void test2()
{
    vector<int> vec;
    for (size_t i = 0; i < 10000; i++)
    {
        vec.push_back(i);
    }    
    cout << "capacity:" << vec.capacity() << endl;
    cout << "size:" << vec.size() << endl;

    //重新指定大小
    vec.resize(10);
    cout << "capacity:" << vec.capacity() << endl;
    cout << "size:" << vec.size() << endl;

    //使用swap收缩内存空间
    //vector<int>(vec)  匿名对象: 使用vec创建新的对象(使用拷贝构造函数创建新的对象)
    vector<int>(vec).swap(vec);
    cout << "capacity:" << vec.capacity() << endl;
    cout << "size:" << vec.size() << endl;
}

int main(int argc, char const *argv[])
{   
    // test();
    test2();
    return 0;
}
