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

int main(int argc, char const *argv[])
{
    list<int> lst;
    for (size_t i = 0; i < 5; i++)
    {
        lst.push_back(i);
    }
    print_info(lst);

    if (lst.empty())
    {
        cout << "list is empty" << endl;
    }
    else
    {
        cout << "list is not empty" << endl;
        cout << "size:" << lst.size() << endl;
    }



    lst.resize(10, 100);
    cout << "resize:" << endl;
    print_info(lst);


    return 0;
}
