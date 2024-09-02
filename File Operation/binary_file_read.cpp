#include<iostream>
#include<fstream>

using namespace std;

class Person
{
public:
    char m_Name[64];
    int m_Age;

};

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ifs.open("binary_text_file.txt", ios::in | ios::binary);
    if ( !ifs.is_open())
    {
        cout << "open failed" << endl;
        return 0;
    }

    Person person;
    ifs.read((char *)&person, sizeof(person));
    cout << person.m_Name << endl << person.m_Age << endl;

    ifs.close();
    
    return 0;
}
