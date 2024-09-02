#include<iostream>
#include<algorithm>
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
    deq.push_back(8);
    deq.push_back(3);
    deq.push_back(6);
    deq.push_front(1);
    deq.push_front(7);
    deq.push_front(2);
    print_info(deq);

    sort(deq.begin(), deq.end());
    print_info(deq);
    
    return 0;
}
