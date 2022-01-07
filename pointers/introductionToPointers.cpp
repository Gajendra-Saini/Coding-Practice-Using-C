#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a; // pointer will store address of that variable
    int **c = &p;

    cout << a << endl;   // 10
    cout << &a << endl;  // adress of a
    cout << p << endl;   // 10
    cout << &p << endl;  // address of p
    cout << *p << endl;  // address of a
    cout << c << endl;   // 10
    cout << *c << endl;  // 10
    cout << **c << endl; // address of p
    cout << &c << endl;  // adress of c

    return 0;
}