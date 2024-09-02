#include<iostream>
#include<map>

using namespace std;

void print_info(map<int, int> &mp)
{
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout << "key:" << (*it).first << " value:" << it->second << endl;
    }
    cout << endl;
}

void test()
{
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 10));
    mp.insert(pair<int, int>(3, 30));
    mp.insert(pair<int, int>(2, 20));
    mp.insert(pair<int, int>(4, 40));
    print_info(mp);

    map<int, int> mp2(mp);
    print_info(mp2);

    map<int, int> mp3 = mp;
    print_info(mp3);
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
