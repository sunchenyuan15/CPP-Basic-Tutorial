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

class Descending_order
{
public:
    //重载()
    bool operator()(int value1, int value2)
    {
        //指定排序规则为降序(前者大)
        //当value1 > value2时 return true
        return value1 > value2;
    }
};

void test1()
{
    set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(40);
    st.insert(30);
    st.insert(50);

    cout << "ascending order:" << endl;
    print_info(st);
}


void test2()
{    
    set<int, Descending_order> st;
    st.insert(10);
    st.insert(20);
    st.insert(40);
    st.insert(30);
    st.insert(50);

    cout << "descending order:" << endl;
    for (set<int, Descending_order>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;    
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
