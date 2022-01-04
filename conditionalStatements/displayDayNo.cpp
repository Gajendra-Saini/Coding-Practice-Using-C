#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter day no(1-7) ";
    cin >> day;
    switch (day)
    {
    case 2:
        cout << "mon";
        break;
    case 3:
        cout << "tue";
        break;
    case 4:
        cout << "wed";
        break;
    case 5:
        cout << "thr";
        break;
    case 6:
        cout << "fri";
        break;
    case 7:
        cout << "sat";
        break;
    case 1:
        cout << "sun";
        break;
    default:
        cout << "Wrong input";
    }
    return 0;
}