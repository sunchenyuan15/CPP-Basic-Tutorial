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

    //方法1
    mp.insert(pair<int, int>(1, 10));

    //方法2
    mp.insert(make_pair(3, 30));

    //方法3
    mp.insert(map<int, int>::value_type(2, 20));

    //方法4
    mp[4] = 40;
    print_info(mp);

}

void test2()
{
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 10));
    mp.insert(pair<int, int>(2, 20));
    mp.insert(pair<int, int>(3, 30));
    mp.insert(pair<int, int>(4, 40));
    print_info(mp);

    mp.erase(mp.begin());
    print_info(mp);

    mp.erase(3);
    print_info(mp);

    mp.clear();
    print_info(mp);
}

int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}
