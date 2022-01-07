#include <iostream>
using namespace std;

int main()
{

    // int a[20];
    // int a[30]; // we cannot declare same array multiple times

    int *p = new int[20];
    delete[] p;
    p = new int[40];

    return 0;
}