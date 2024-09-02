#include<iostream>
#include<map>

using namespace std;

//仿函数
class Descending_order
{
public:
    bool operator()(int value1, int value2)
    {
        //降序
        return value1 > value2;
    }

};

void print_info(map<int, int, Descending_order> &mp)
{
    for (map<int, int, Descending_order>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout << "key:" << (*it).first << " value:" << it->second << endl;
    }
    cout << endl;
}

void test()
{
    map<int, int, Descending_order> mp;
    mp.insert(pair<int, int>(1, 10));
    mp.insert(pair<int, int>(2, 20));
    mp.insert(pair<int, int>(3, 30));
    mp.insert(pair<int, int>(4, 40));
    print_info(mp);

}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
