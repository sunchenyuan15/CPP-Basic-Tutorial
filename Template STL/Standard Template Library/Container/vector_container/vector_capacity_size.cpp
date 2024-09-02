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
    print_info(vec);

    if (vec.empty())
    {
        cout << "vec is empty" << endl;
    }
    else
        cout << "capacity:" << vec.capacity() << endl;
        cout << "size:" << vec.size() << endl;


    vec.resize(10, 8);
    print_info(vec);

    vec.resize(6);
    print_info(vec);

    return 0;
}
