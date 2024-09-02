#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

void test()
{
    vector<bool> vec;
    vec.push_back(true);
    vec.push_back(false);

    for (vector<bool>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    vector<bool> vec2;
    vec2.resize(vec.size());
    transform(vec.begin(), vec.end(), vec2.begin(), logical_not<bool>());
    
    for (vector<bool>::iterator it = vec2.begin(); it != vec2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
