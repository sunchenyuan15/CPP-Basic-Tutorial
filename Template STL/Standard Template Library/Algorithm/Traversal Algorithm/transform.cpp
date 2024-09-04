#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Transform
{
public:
    int operator()(int value)
    {
        return value + 100;
    }    
};

class Print
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
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    vector<int> vec_target;
    vec_target.resize(vec.size());

    transform(vec.begin(), vec.end(), vec_target.begin(), Transform());
    for_each(vec_target.begin(), vec_target.end(), Print());
    cout << endl;
    return 0;
}
