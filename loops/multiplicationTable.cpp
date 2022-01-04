#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << "** Table **" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << num << "*" << i << "=" << num * i << endl;
    }
    return 0;
}