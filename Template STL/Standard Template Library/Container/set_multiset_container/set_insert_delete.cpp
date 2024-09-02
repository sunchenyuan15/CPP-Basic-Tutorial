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

    st.erase(st.begin());
    print_info(st);

    st.erase(3);
    print_info(st);

    st.clear();
    print_info(st);

}


int main(int argc, char const *argv[])
{  
    test();
    return 0;
}
