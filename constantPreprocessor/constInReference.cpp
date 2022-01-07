#include <iostream>
using namespace std;

void fun(const int &a, int &b)
{
    // ++a; // &a is constant tpye so no operation can perform on it
    ++b;
    cout << a << " " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    fun(x, y);
    return 0;
}