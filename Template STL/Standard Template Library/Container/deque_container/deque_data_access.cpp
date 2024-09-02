#include<iostream>
#include<deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> deq;
    for (size_t i = 0; i < 10; i++)
    {
        deq.push_back(i);
    }

    for (size_t i = 0; i < deq.size(); i++)
    {
        cout << deq[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < deq.size(); i++)
    {
        cout << deq.at(i) << " ";
    }
    cout << endl;

    cout << deq.front() << endl;
    cout << deq.back() << endl;

    return 0;
}
