#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_info(int val)
{
    cout << val << " ";
}

void test()
{
    //新建容器
    vector<int> vec;

    //向容器插入数据(尾插)
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    //通过迭代器访问容器中数据
    vector<int>::iterator begin = vec.begin();  //起始迭代器:指向容器中的第一个元素
    vector<int>::iterator end = vec.end();      //结束迭代器:指向容器中的最后一个元素的下一个位置

    //方式1
    while (begin != end)
    {
        cout << *begin << " ";
        begin++;
    }
    cout << endl;

    //方式2
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //方式3
    for_each(vec.begin(), vec.end(), print_info);
    cout << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}

