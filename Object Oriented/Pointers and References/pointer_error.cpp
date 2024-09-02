#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //1.
    // int *pnumber{nullptr};
    // cout << *pnumber << endl;

    //2.
    int *pnumber2{new int{10}};

    cout << *pnumber2 << endl;  //解引用
    cout << pnumber2 << endl;

    delete pnumber2;    
    //内存使用权归还系统, 内存的值清零/垃圾值
    //但是指针还是指向这块内存

    cout << *pnumber2 << endl;
    cout << pnumber2 << endl;

    pnumber2 = nullptr; //清空

    // cout << *pnumber2 << endl;
    cout << pnumber2 << endl;

    return 0;
}
