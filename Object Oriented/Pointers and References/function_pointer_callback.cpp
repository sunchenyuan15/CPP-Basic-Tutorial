#include<iostream>
#include<string>
using namespace std;

char encrypt(const char &param)
{
    return param + 5;
}

char decrypt(const char &param)
{
    return param - 5;
}

void func(string &stringItem, char(*callback)(const char &param))
{
    for (size_t i = 0; i < stringItem.size(); i++)
    {
        /* code */
        stringItem[i] = callback(stringItem[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    string name{"sunchenyuan"};
    func(name, encrypt);
    cout << "encrypt:" << name << endl;
    func(name, decrypt);
    cout << "decrypt:" << name << endl;
    return 0;
}
