#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "(ax^2+bx+c) Enter a,b,c " << endl;
    cin >> a >> b >> c;
    float r = ((b * b) - (4 * a * c));
    if (r > 0)
    {
        cout << "roots are real";
    }
    else if (r == 0)
    {
        cout << "roots are equal";
    }
    else
    {
        cout << "roots are imagenery";
    }
    return 0;
}