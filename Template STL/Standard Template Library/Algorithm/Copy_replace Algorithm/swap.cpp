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
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;

    vector<int> vec2;
    for (size_t i = 10; i < 20; i++)
    {
        vec2.push_back(i);
    }
    for_each(vec2.begin(), vec2.end(), Print_info());
    cout << endl;

    cout << "after swap:" << endl;
    swap(vec, vec2);
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;
    for_each(vec2.begin(), vec2.end(), Print_info());
    cout << endl;

    return 0;
}
