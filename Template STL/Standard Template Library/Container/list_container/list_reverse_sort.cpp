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
    for (size_t i = 0; i < 5; i++)
    {
        lst.push_back(i);
    }
    print_info(lst);

    lst.reverse();
    print_info(lst);
}

bool compare(int value1, int value2)
{
    //降序
    return value1 > value2;
}

void test2()
{
    list<int> lst;
    lst.push_back(5);
    lst.push_back(1);
    lst.push_back(8);
    lst.push_back(2);
    lst.push_back(1);

    print_info(lst);

    lst.sort();
    print_info(lst);    

    lst.sort(compare);
    print_info(lst);    
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();
    return 0;
}
