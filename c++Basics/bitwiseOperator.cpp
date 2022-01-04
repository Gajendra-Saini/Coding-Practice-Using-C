#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 12, c = 5;
    // this operation perform on bits so
    cout << (~c) << endl;     // so we add 1 to the last of digit then add it and put a negative sign// print -6
    cout << (a & b) << endl;  // print 8 // and opeator
    cout << (a | b) << endl;  // print 14 // or operator
    cout << (a ^ b) << endl;  // xor operator // print 6
    cout << (~a) << endl;     // print -11
    cout << (!a) << endl;     // it return onl true(1) or false(1)
    cout << (~b) << endl;     // print -13
    cout << (a << 1) << endl; // print 20
    cout << (a >> 2) << endl; // print 2

    return 0;
}