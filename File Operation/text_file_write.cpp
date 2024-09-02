#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream ofs;
    ofs.open("text_file.txt", ios::out);
    ofs << "text_" << endl;
    ofs << "file" << endl;
    ofs.close();
    return 0;
}

