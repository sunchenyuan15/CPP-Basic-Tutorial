#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_info(vector<int> &vec)
{
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

class Descending_order
{
public:
    bool operator()(int value1, int value2)
    {
        return value1 > value2;
    }    
};

void test()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(1);
    vec.push_back(2);
    print_info(vec);

    sort(vec.begin(), vec.end(), Descending_order());
    print_info(vec);

}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
