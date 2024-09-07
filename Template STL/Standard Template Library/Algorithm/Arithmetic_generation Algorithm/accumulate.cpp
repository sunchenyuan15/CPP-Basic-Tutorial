#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    for (size_t i = 0; i <= 100; i++)
    {
        vec.push_back(i);
    }
    
    cout << accumulate(vec.begin(), vec.end(), 0) << endl;
    
    return 0;
}
