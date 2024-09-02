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

void test()
{
    deque<int> deq;
    for (size_t i = 0; i < 8; i++)
    {
        deq.push_back(i);
    }
    print_info(deq);

    deq.push_front(12);
    deq.push_back(123456);
    print_info(deq);
    
    deq.pop_front();
    deq.pop_back();
    print_info(deq);    
}

void test2()
{
    deque<int> deq;
    for (size_t i = 0; i < 8; i++)
    {
        deq.push_back(i);
    }
    print_info(deq);

    deq.insert(deq.begin(), 10);
    deq.insert(deq.end(), 3, 33);
    print_info(deq);
    
    //区间插入
    deque<int> deq2;
    deq2.push_back(100);
    deq2.insert(deq2.end(), deq.begin(), deq.end());
    print_info(deq2);

}


void test3()
{
    deque<int> deq;
    for (size_t i = 0; i < 8; i++)
    {
        deq.push_back(i);
    }
    print_info(deq);

    deq.erase(deq.begin()+1);
    print_info(deq);

    deque<int>::iterator it = deq.begin();
    it++;
    deq.erase(it);
    print_info(deq);

    deq.clear();
    print_info(deq);
}

int main(int argc, char const *argv[])
{
    // test();
    // test2();
    test3();
    return 0;
}

