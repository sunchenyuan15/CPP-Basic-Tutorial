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

int main(int argc, char const *argv[])
{
    set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(50);
    st.insert(30);
    st.insert(30);
    st.insert(40);
    print_info(st);

    set<int>::iterator pos = st.find(30);
    if ( pos!= st.end())
    {
        
        cout << *pos << endl;
    }
    else
        cout << "not found" << endl;


    int num = st.count(30);
    cout << num << endl;

    return 0;
}

