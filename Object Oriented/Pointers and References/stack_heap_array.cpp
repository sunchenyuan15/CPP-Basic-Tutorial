#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number[10];
    cout << "数组大小:" << sizeof(number) << endl;
    cout << "数组指针大小:" << sizeof(&number) << endl;

    cout << "separator" << endl;
    double *parray{new double[10]{1, 2, 3}};
    for (size_t i = 0; i < 10; i++)
    {
        cout << *(parray+i) << endl;
        /* code */
    }
    cout << "数组指针大小:" << sizeof(parray) << endl;

    delete[] parray;
    for (size_t i = 0; i < 10; i++)
    {
        cout << *(parray+i) << endl;
        /* code */
    }

    parray = nullptr;

    if (parray != nullptr)
    {
        for (size_t i = 0; i < 10; i++)
        {
            cout << *(parray+i) << endl;
        }
    }
    
    return 0;
}

