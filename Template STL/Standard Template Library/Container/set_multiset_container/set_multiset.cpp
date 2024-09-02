#include<iostream>
#include<set>

using namespace std;

void print_set(set<int> &st)
{
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}


void print_multiset(multiset<int> &mst)
{
    for (multiset<int>::iterator it = mst.begin(); it != mst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}


int main(int argc, char const *argv[])
{
    set<int> st;
    pair<set<int>::iterator, bool> result = st.insert(30);;
    if (result.second)
    {
        cout << "Inserted successfully" << endl;
    }
    else
        cout << "Insert failed" << endl;
    

    result = st.insert(30);
    if (result.second)
    {
        cout << "Inserted successfully" << endl;
    }
    else
        cout << "Insert failed" << endl;

    print_set(st);

    multiset<int> mst;
    mst.insert(40);
    mst.insert(40);    
    mst.insert(40);
    print_multiset(mst);

    return 0;
}
