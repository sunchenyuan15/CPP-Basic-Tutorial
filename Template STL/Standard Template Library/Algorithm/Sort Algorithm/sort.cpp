#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class Print_Info
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
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(2);

    for_each(vec.begin(), vec.end(), Print_Info());
    cout << endl;

    cout << "after sorting in ascending order:" << endl;
    sort(vec.begin(), vec.end());

    for_each(vec.begin(), vec.end(), Print_Info());
    cout << endl;

    cout << "After sorting in descending order:" << endl;
    sort(vec.begin(), vec.end(), greater<int>());
    
    for_each(vec.begin(), vec.end(), Print_Info());
    cout << endl;
    return 0;
}
