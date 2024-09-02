#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    const char *string{"sunchenyuan chenyuan"};
    const char *string1{"111"};

    char string2[]{"yuanxiaoya"};
    char string3[]{"222"};

    cout << strlen(string) << endl;
    cout << strlen(string1) << endl;

    cout << strcmp(string ,string1) << endl;

    cout << strcpy(string2, string3) << endl;

    cout << strcat(string2, string3) << endl;

    cout << strchr(string, 'c') << endl;
    cout << strrchr(string , 'c') << endl;

    int index{0};
    char string4[]{"yuanxiaoya"};
    const char* pointer{string4};
    while ((pointer = strchr(pointer, 'a')) != nullptr)
    {
        cout << index << " " <<pointer << endl;
        ++index;
        ++pointer;

        /* code */
    }
    return 0;
}

