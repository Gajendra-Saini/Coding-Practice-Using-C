#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw 5;
        }
        cout << (a / b) << endl;
    }
    catch (int e)
    {
        cout << e << " divisiable by zero " << endl;
    }
    return 0;
}