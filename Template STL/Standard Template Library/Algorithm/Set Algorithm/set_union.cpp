#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Print_info
{
public:
    void operator()(int value)
    {
        cout << value << " ";
    }
};

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vector<int> vec2;

    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;

    for (size_t i = 8; i < 15; i++)
    {
        vec2.push_back(i);
    }
    for_each(vec2.begin(), vec2.end(), Print_info());
    cout << endl;        
    
    vector<int> dest_vec;
    //目标容器需要提前开辟空间
    //最特殊情况：容器没有交集，故开辟空间取大容器+小容器的值
    dest_vec.resize(vec.size() + vec2.size()); 

    vector<int>::iterator dest_vec_end = set_union(vec.begin(), vec.end(), vec2.begin(), vec2.end(), dest_vec.begin());
    for_each(dest_vec.begin(), dest_vec_end, Print_info());
    cout << endl;

    return 0;
}
