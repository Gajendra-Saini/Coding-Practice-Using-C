#include <iostream>
using namespace std;
int &func(int &x)
{ // function will take input as reference
    cout << x << endl;
    return x;
}
int main()
{

    int a = 10;
    func(a) = 20;
    cout << a << endl;

    return 0;
}