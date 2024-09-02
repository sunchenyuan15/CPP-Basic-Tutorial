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



    list<int> lst2(lst.begin(), lst.end());
    print_info(lst2);

    

    list<int> lst3(lst2);
    print_info(lst3);



    list<int> lst4(5, 8);
    print_info(lst4);
        
    return 0;
}
