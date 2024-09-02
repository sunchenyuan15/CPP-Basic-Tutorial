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
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    print_info(vec);

    vec.pop_back();
    print_info(vec);

    vec.insert(vec.begin(), 10);
    print_info(vec);

    vec.insert(vec.begin(), 2, 11);
    print_info(vec);

    vec.erase(vec.begin());
    print_info(vec);

    // vec.erase(vec.begin(), vec.end());
    vec.clear();
    print_info(vec);

    return 0;
}
