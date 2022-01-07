#include <iostream>
using namespace std;

int main()
{

    int a = 10, c;
    c = a;
    int &b = a; // a and b are same variable
    cout << a << " " << b << endl;
    b++;
    a++;
    cout << a << " " << b << " " << c << endl;

    return 0;
}