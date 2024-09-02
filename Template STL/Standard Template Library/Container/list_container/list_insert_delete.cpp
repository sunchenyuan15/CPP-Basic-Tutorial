#include<iostream>
#include<list>

using namespace std;

void print_info(const list<int> &lst)
{
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}


void test1()
{
    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    lst.push_front(3);
    lst.push_front(2);
    lst.push_front(1);
    print_info(lst);

    lst.pop_back();
    print_info(lst);

    lst.pop_front();
    print_info(lst);

    //insert
    list<int>::iterator it = lst.begin();
    it++;
    lst.insert(it, 88);
    print_info(lst);

    it = lst.begin();
    lst.erase(it);
    print_info(lst);

    lst.push_back(100);
    lst.push_back(100);
    lst.push_back(100);
    lst.push_back(100);
    print_info(lst);

    lst.remove(100);
    print_info(lst);

    lst.clear();
    print_info(lst);
}


int main(int argc, char const *argv[])
{
    test1();
    return 0;
}
