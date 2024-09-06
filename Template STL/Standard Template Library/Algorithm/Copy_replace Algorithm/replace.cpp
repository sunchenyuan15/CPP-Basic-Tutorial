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
    vec.push_back(2);
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;

    replace(vec.begin(), vec.end(), 2, 222);
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;

    return 0;
}
