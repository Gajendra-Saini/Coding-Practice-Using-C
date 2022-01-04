#include <iostream>
using namespace std;

int main()
{
    // factor of 8 is 1,2,4,8;
    int num;
    cin >> num;
    cout << "Factor is " << endl;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}