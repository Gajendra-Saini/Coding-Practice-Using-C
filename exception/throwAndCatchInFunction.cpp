#include <iostream>
using namespace std;
int func(int a, int b)
{
    if (b == 0)
    {
        throw string("error 104");
    }
    return a / b;
}
int main()
{
    int a, b, c;
    cin >> a >> b;
    try
    {
        c = func(a, b);
        cout << c << endl;
    }
    catch (string e)
    {
        cout << "divisible by 0 error !" << e << endl;
    }
    catch (...)
    {
        cout << "catching all members" << endl;
    }

    return 0;
}