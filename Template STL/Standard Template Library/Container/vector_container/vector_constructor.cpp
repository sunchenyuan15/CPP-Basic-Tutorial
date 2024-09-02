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

int main(int argc, char const *argv[])
{
    //默认构造
    vector<int> vec;

    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    print_info(vec);

    //区间元素拷贝构造
    vector<int> vec2(vec.begin(), vec.end());
    print_info(vec2);

    //n个元素构造
    vector<int> vec3(5, 1);
    print_info(vec3);

    //拷贝构造
    vector<int> vec4(vec3);
    print_info(vec4);


    return 0;
}
