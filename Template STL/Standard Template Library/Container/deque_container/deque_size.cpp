#include<iostream>
#include<deque>

using namespace std;

void print_info(const deque<int> &deq)
{
    for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

int main(int argc, char const *argv[])
{
    deque<int> deq;
    for (size_t i = 0; i < 8; i++)
    {
        deq.push_back(i);
    }
    print_info(deq);

    if (deq.empty())
    {
        cout << "empty deque" << endl;
    }
    else
        cout << "size:" << deq.size() << endl;


    deq.resize(20);
    print_info(deq);

    deq.resize(30, 8);
    print_info(deq);

    deq.resize(10);
    print_info(deq);
    
    return 0;
}
