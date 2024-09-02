#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s{"sun"};
    string c{"chen"};
    string string1{s + " " + c};
    string string2{c.append("yuan", 2, 2)};
    cout << string1 << endl;
    cout << string2 << endl;

    cout << string1.size() << endl;
    cout << string1.capacity() << endl;

    for (auto i : string2)
    {
        cout << i << " ";
    }

    cout << endl;

    for (size_t i = 0; i < string2.size(); i++)
    {
        cout << string2.at(i) << " ";
    }

    cout << endl;
    
    cout << string2.front() << endl;
    cout << string2.back() << endl;
    return 0;
}

