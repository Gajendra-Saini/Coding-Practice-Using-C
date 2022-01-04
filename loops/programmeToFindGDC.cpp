// Gdc means greatest common divisior
// 12 18 ka gdc 6 hai
// 27 18 ka gdc 9 hai
// 15 9 ka gdc 3 hai

// Revision krne layak question hai
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}