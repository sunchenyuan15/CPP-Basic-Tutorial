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
    Person person = {"chenyuan", 24};
    ofstream ofs;
    ofs.open("binary_text_file.txt", ios::out | ios::binary); 

    ofs.write((const char*)&person, sizeof(person));

    ofs.close();
    
    return 0;
}
