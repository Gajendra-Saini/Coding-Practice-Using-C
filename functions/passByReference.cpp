
#include <iostream>
using namespace std;
int swap_func(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int x = 10, y = 11;

    swap_func(x, y);
    cout << x << " " << y << endl;

    return 0;
}