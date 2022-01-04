#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    cout << "facto of " << num << " is " << sum;
    return 0;
}