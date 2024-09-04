#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Greater_than_five
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
    vector<int>::iterator it = find_if(vec.begin(), vec.end(), Greater_than_five());    //Greater_than_five() 匿名函数对象
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
