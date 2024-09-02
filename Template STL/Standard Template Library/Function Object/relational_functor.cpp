#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

// class Descending_order
// {
// public:
//     bool operator()(int value1, int value2)
//     {
//         return value1 > value2;
//     }
// };

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    

    //
    // sort(vec.begin(), vec.end(), Descending_order());
    sort(vec.begin(), vec.end(), greater<int>());

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    

    return 0;
}

