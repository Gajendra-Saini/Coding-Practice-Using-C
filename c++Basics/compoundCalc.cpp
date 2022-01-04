#include <iostream>
using namespace std;

int main()
{
    float amount, rate;
    int day;
    cout << "Enter amount ,time,rate :" << endl;
    cin >> amount >> day >> rate;
    cout << "Total amount to pay is :" << (amount) + (amount * day * rate) / 1000 << endl;
    return 0;
}