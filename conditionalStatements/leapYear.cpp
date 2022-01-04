#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "leap year";
                return 0;
            }
            cout << "not leap year";
            return 0;
        }
        cout << "leap year";
    }
    else
    {
        cout << "not leap year";
    }

    return 0;
}