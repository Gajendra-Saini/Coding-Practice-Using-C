#include <iostream>
using namespace std;

int main()
{

    int *p = new int[5]; // heap memory allocation

    delete[] p;

    return 0;
}