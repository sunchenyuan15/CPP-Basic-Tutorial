#include<iostream>
#include<vector>

using namespace std;

void print_info(vector<int> &vec)
{
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

int main(int argc, char const *argv[])
{
    vector<int> vec;
    for (size_t i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    
    
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;


    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    return 0;
}
