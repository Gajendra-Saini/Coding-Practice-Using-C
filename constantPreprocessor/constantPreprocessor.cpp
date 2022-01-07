#include <iostream>
using namespace std;

int main()
{
    int value = 20;
    // cout << value << endl;

    // value++; // not allowed because value is const
    // cout << value << endl;

    const int *p = &value;
    // *p++;
    value++;
    // ++*p;// not done because pointer is constant
    cout << value << endl;
    cout << *p << endl;

    return 0;
}