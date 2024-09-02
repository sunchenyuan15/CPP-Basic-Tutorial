#include<iostream>
#include<vector>

using namespace std;

void test()
{
    //创建大容器
    vector<vector<int>> vec;

    //创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    //向小容器中添加数据
    for (size_t i = 0; i < 3; i++)
    {
        v1.push_back(i);
        v2.push_back(i+1);
        v3.push_back(i+2);
        v4.push_back(i+3);
    }
    
    //将小容器放入大容器中
    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    vec.push_back(v4);
    
    for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        //it 迭代器可理解为指针
        //(*it)是vector<int>(容器)类型
        //(*(*it))是int类型
        for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
        {
            cout << *it2 << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
