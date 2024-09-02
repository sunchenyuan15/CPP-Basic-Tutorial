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


    deque<int> deq2;
    deq2 = deq;
    print_info(deq2);

    deque<int> deq3;
    deq3.assign(deq2.begin(), deq2.end());
    print_info(deq3);


    deque<int> deq4;
    deq4.assign(5, 8);
    print_info(deq4);

    
    return 0;
}
