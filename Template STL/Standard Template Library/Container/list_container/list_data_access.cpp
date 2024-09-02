#include<iostream>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    cout << lst.front() << endl;
    cout << lst.back() << endl;

    list<int>::iterator it = lst.begin();

    /*不支持随机访问*/
    // it-=1;  //fault
    // it+=1;  //fault

    //后置递增：先返回再递增
    cout << *(it++) << endl;
    cout << *(it--) << endl;
    return 0;
}
