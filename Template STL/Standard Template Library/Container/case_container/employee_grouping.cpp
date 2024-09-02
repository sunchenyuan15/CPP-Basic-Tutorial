#include<iostream>
#include<vector>
#include<map>
#include<ctime>

using namespace std;

class employee
{
public:
    string m_name;
    int m_salary;
};

int main(int argc, char const *argv[])
{

    srand(static_cast<unsigned int>(time(0)));

    vector<employee> vec;

    string name = "ABCDEFGHIJ";
    for (size_t i = 0; i < 10; i++)
    {
        employee emp;
        emp.m_name = "emp";
        emp.m_name = emp.m_name + name[i];
        emp.m_salary = rand() % 10000 + 10000;  //10000-19999
        vec.push_back(emp);
    }


    multimap<int, employee> mmp;
    for (vector<employee>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        int de_num = rand() % 3;    //0-3

        //key:de_num, value:*it
        mmp.insert(make_pair(de_num, *it));
    }

    /*
    示例 
    0：A B C 
    1: D E 
    2: F G... 
    */
   
    cout << "department_0:" << endl;
    multimap<int, employee>::iterator it =  mmp.find(0);
    int count = mmp.count(0);
    int index = 0;
    for (; it != mmp.end() && index < count; it++, index++)
    {
        cout << "name:" << it->second.m_name << " salary:" << it->second.m_salary << endl;
    }
    
    cout << "department_1:" << endl;
    it =  mmp.find(1);
    count = mmp.count(1);
    index = 0;
    for (; it != mmp.end() && index < count; it++, index++)
    {
        cout << "name:" << it->second.m_name << " salary:" << it->second.m_salary << endl;
    }

    cout << "department_2:" << endl;
    it =  mmp.find(2);
    count = mmp.count(2);
    index = 0;
    for (; it != mmp.end() && index < count; it++, index++)
    {
        cout << "name:" << it->second.m_name << " salary:" << it->second.m_salary << endl;
    }

    return 0;
}
