#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ifs.open("text_file.txt", ios::in);
    if(!ifs.is_open())
    {
        cout << "open failed" << endl;
        return 0;
    }

    // 方式1
    // char buf[1024] = {0};
    // while (ifs >> buf)  //Shift right
    // {
    //     cout << buf << endl; 
    //     /* code */
    // }

    
    // 方式2
    // char buf2[1024] = {0};
    // while (ifs.getline(buf2, sizeof(buf2)))
    // {
    //     cout << buf2 << endl;
    //     /* code */
    // }
    

    // 方式3
    // string str;
    // while (getline(ifs, str))
    // {
    //     cout << str << endl;
    // }
    

    // 方式4
    char c;
    while ((c = ifs.get()) != EOF)  //end of file
    {
        cout << c;
    }
    
    ifs.close();
    return 0;
}
