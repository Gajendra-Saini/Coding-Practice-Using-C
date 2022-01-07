#include <iostream>
using namespace std;

template <class t>

t func(t x, t y)
{
    return x + y;
}

int main()
{

    cout << func(15, 16) << endl;
    cout << func(5, 6) << endl;
    cout << func(5, 0) << endl;
    cout << func(2.5, 7.9) << endl;

    return 0;
}