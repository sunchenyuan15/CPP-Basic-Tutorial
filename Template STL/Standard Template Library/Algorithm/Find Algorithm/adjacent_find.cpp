#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(4);
    // vec.push_back(4);
    vec.push_back(5);

    vector<int>::iterator it = adjacent_find(vec.begin(), vec.end());
    if (it == vec.end())
    {
        cout << "not found" << endl;
    }
    else
        cout << *it << endl;
    return 0;
}
