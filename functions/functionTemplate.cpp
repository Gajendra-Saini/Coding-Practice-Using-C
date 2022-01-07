#include <iostream>
using namespace std;

template <class T>
T fun(T x, T y)
{
    return x + y;
}

int main()
{
    cout << fun(5, 6) << endl;
    cout << fun(4.2, 8.6) << endl;
    return 0;
}