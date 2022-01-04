#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, total;
    cout << "Enter marks " << endl;
    cin >> m1 >> m2 >> m3;
    total = (m1 + m2 + m3) / 3;
    if (total < 35)
    {
        cout << "C";
    }
    if (total >= 35 && total < 65)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
    return 0;
}