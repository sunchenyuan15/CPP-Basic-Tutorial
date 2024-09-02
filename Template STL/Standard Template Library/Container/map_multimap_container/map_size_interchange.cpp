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

    if (mp.empty())
    {
        cout << "empty map" << endl;
    }
    else
    {
        cout << "size:" << mp.size() << endl;
        print_info(mp);
    }

    map<int, int> mp2;
    mp2.insert(pair<int, int>(1, 50));
    mp2.insert(pair<int, int>(2, 60));
    mp2.insert(pair<int, int>(3, 70));
    print_info(mp2);

    mp.swap(mp2);
    cout << "after sort:" << endl;
    print_info(mp);
    print_info(mp2);

}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
