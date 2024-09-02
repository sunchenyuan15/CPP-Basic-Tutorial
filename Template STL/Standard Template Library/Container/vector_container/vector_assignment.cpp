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


    vector<int> vec2;
    vec2 = vec;
    print_info(vec2);

    vector<int> vec3;
    vec3.assign(vec.begin(), vec.end());
    print_info(vec3);


    vector<int> vec4;
    vec4.assign(5, 0);
    print_info(vec4);

    return 0;
}
