#include <iostream>
using namespace std;
int var = 50;
int func(int a)
{
    int b = 20;
    return b;
}
int main()
{
    int var_b = 20;
    cout << var << endl;
    // cout << b << endl; // this is local variable and not use in global function

    return 0;
}