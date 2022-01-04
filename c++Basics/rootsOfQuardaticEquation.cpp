#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter a,b,c (ax^2+bx+c) value :" << endl;
    cin >> a >> b >> c;
    float r = ((b * b) - (4 * a * c));
    if (r >= 0)
    {
        cout << "Roots is :" << endl
             << (-b + r) / (2 * a) << endl
             << (-b - r) / (2 * a) << endl;
    }
    else
    {
        cout << "you entered wrong input " << endl;
    }
    return 0;
}
