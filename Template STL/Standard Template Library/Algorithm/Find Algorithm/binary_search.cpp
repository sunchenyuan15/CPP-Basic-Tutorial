#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    
    cout << binary_search(vec.begin(), vec.end(), 5) << endl;
    return 0;
}
