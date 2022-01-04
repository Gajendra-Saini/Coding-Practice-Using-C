#include <iostream>
using namespace std;

int main()
{
    float bsal, pa, pd;
    cout << "Enter your Salery " << endl;
    cin >> bsal;
    cout << "Enter Pa in %" << endl;
    cin >> pa;
    cout << "Enter Pd in % " << endl;
    cin >> pd;
    float netsal = bsal + ((bsal * pa) / (100)) - ((bsal * pd) / (100));
    cout << "Net sal :" << netsal << endl;

    return 0;
}