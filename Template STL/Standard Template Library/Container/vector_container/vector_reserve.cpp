#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;

    //预留空间
    vec.reserve(10000);
    
    int flag;
    int *ptr = nullptr;
    for (size_t i = 0; i < 10000; i++)
    {
        vec.push_back(i);
        if (ptr != &vec[0])
        {
            ptr = &vec[0];
            flag++;
        }
        
    }
    cout << flag << endl;


    return 0;
}
