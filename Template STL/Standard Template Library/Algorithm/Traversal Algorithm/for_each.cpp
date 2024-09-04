#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_info(int val)
{
    cout << val << " ";
}


class Print_info
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

int main(int argc, char const *argv[])
{
    vector<int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    //普通函数
    for_each(vec.begin(), vec.end(), print_info);
    cout << endl;

    //函数对象(仿函数)
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;
    

    return 0;
}
