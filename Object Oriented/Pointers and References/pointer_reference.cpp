#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double value{5.12};
    double &ref_value{value};
    double *p_value{&value};

    cout << value << " " << ref_value << " " << &value << endl;

    ref_value = 5.13;
    cout << value << " " << ref_value << " " << &ref_value << endl;

    *p_value = 5.14;
    cout << value << " " << ref_value << " " << p_value << " " << *p_value << endl;

    return 0;
}
