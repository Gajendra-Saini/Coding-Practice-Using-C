#include <iostream>
using namespace std;

int main()
{
    int choise;
    cout << "Enter choise :\n 1.add \n 2.differnce \n 3.divide \n 4.multiply" << endl;
    cin >> choise;
    int a, b;
    cout << "Enter Numbers :" << endl;
    cin >> a >> b;
    switch (choise)
    {
    case 1:
        cout << "sum is " << a + b;
        break;
    case 2:
        cout << "Difference is " << a - b;
        break;
    case 3:
        cout << "divide is " << a / b;
        break;
    case 4:
        cout << "multiply is " << a * b;
        break;
    default:
        cout << "Wrong input ";
        return 0;
    }
    return 0;
}