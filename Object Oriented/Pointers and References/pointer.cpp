#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    //栈上
    // int number{50};
    // int *pnumber = &number;
    // cout << "number=" << *pnumber << endl;
    
    //堆上
    int *pnumber{nullptr};
    pnumber = new int;
    *pnumber = 100;
    cout << *pnumber << endl;

    delete pnumber;
    pnumber = nullptr;
    return 0;
}
