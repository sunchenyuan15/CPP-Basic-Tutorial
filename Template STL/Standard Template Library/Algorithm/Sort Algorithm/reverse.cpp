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


    reverse(vec.begin(), vec.end());
    
    for_each(vec.begin(), vec.end(), Print_info());
    cout << endl;    

    return 0;
}
