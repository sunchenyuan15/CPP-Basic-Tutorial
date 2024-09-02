#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Find_if
{
public:
    bool operator()(int value)
    {
        return value > 5;
    }    
};

void test()
{
    vector<int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    vector<int>::iterator it = find_if(vec.begin(), vec.end(), Find_if());    //Find() 匿名函数对象
    if (it != vec.end())
    {
        cout << (*it) << endl;
    }
    else
        cout << "not found" << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
