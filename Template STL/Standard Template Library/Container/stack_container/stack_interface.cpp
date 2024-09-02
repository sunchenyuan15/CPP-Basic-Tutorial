#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> stk;

    for (size_t i = 0; i < 5; i++)
    {
        stk.push(i);
    }
    cout << "size:" << stk.size() << endl;
    
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    cout << "size:" << stk.size() << endl;

        
    return 0;
}
