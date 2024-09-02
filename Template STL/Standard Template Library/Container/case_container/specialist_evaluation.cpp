#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<ctime>
using namespace std;


class Person
{
public:
    Person(string name, double score)
    {
        m_name = name;
        m_score = score;
    }
    string m_name;
    double m_score;    
};


void create_person(vector<Person> &vec)
{
    
    string name_number = "ABCDE";
    for (size_t i = 0; i < 5; i++)
    {    
        string name = "person";
        name = name + name_number[i];
        double score = 0;

        Person person(name, score);
        vec.push_back(person);

    }
}


void set_score(vector<Person> &vec)
{   
    for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        deque<double> deq;
        for (size_t i = 0; i < 10; i++)
        {
            double score = rand() % 41 + 60;    //60 - 100
            deq.push_back(score);
        }

        cout << it->m_name << " score:";
        for (deque<double>::iterator dit = deq.begin(); dit != deq.end(); dit++)
        {
            cout << *dit << " ";
        }
        cout << endl;

        sort(deq.begin(), deq.end());
        deq.pop_front();
        deq.pop_back();

        double sum = 0;
        for (deque<double>::iterator dit = deq.begin(); dit != deq.end(); dit++)
        {
            sum += *dit;
        }
        double ave = sum / deq.size();

        it->m_score = ave;
    }     
}

void print_score(vector<Person> &vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i].m_name << " average score: " << vec[i].m_score << endl;
    }
}

int main(int argc, char const *argv[])
{
    srand(static_cast<unsigned int>(time(0)));

    vector<Person> vec;
    create_person(vec);
    set_score(vec);
    print_score(vec);
    return 0;
}
