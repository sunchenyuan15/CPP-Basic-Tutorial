#include<iostream>
#include<set>

using namespace std;

void print_info(set<int> &st)
{
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

void test()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(5);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    print_info(st);

    if (st.empty())
    {
        cout << "empty set" << endl;
    }
    else
        cout << "size:" << st.size() << endl;
}

void test2()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(5);
    print_info(st);

    set<int> st2;
    st2.insert(3);
    st2.insert(3);
    st2.insert(4);
    print_info(st2);

    cout << "after swap:" << endl;

    swap(st, st2);
    print_info(st);
    print_info(st2);
}

int main(int argc, char const *argv[])
{
    // test();    
    test2();
    return 0;
}
