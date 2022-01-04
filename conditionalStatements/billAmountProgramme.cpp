#include <iostream>
using namespace std;

int main()
{
    int amount;
    cin >> amount;
    if (amount < 100)
    {
        cout << "Discount is  0";
        cout << "Total amount after discount " << amount << endl;
    }
    else if (amount >= 100 && amount < 500)
    {
        cout << "Discount is " << amount * (0.1) << endl;
        cout << "Total amount after discount " << amount - (amount * 0.1);
    }

    else
    {
        cout << "Discount is " << amount * (0.2) << endl;
        cout << "Total amount after discount " << amount - (amount * 0.2);
    }

    return 0;
}