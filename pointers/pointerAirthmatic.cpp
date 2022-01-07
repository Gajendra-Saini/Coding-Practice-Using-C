#include <iostream>
using namespace std;

int main()
{

    int a[5] = {14, 24, 3, 4, 5};
    int *p = a;
    cout << *p << endl;
    p++; // this will got to the next element address in array
    cout << *p << endl;
    p += 2;
    cout << *p << endl;
    return 0;
}