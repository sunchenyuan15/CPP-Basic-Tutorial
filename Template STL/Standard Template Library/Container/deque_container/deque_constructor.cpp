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
    for (size_t i = 0; i < 10; i++)
    {
        deq.push_back(i);
    }
    print_info(deq);


    deque<int> deq2(deq.begin(), deq.end());
    print_info(deq2);


    deque<int> deq3(10, 8);
    print_info(deq3);

    deque<int> deq4(deq3);
    print_info(deq4);
    
    return 0;
}
