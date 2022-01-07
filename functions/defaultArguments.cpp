#include <iostream>
using namespace std;
int fun(int x = 0, int y = 0, int z = 0)
{
    return x + y + z;
}
int main()
{

    cout << fun() << endl;
    cout << fun(1) << endl;
    cout << fun(1, 2) << endl;
    cout << fun(1, 2, 3) << endl;

    return 0;
}