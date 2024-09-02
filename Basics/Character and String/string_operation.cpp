#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << isalnum('A') << endl;
    cout << isalpha('S') << endl;
    cout << isdigit('1') << endl;

    string msg{"sun chen yuan!"};
    int blanknum{0};
    for (auto i : msg)
    {
        if (isblank(i))
        {
            blanknum++;
            /* code */
        }
        /* code */
    }
    cout << blanknum << endl;

    cout << isupper('A') << endl;
    cout << islower('a') << endl;

    cout << "change:" << endl;
    //引用修改
    for (auto &i : msg)
    {
        i = toupper(i);
        /* code */
    }
    string msg1{"yuanxiaoya"};
    //指针修改
    for (size_t i = 0; i < msg1.size(); i++)
    {
        msg1[i] = toupper(msg1[i]);

        /* code */
    }
    
    cout << msg << endl;
    cout << msg1 << endl;
    return 0;
}

