#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num * 2 == sum)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "not perfect number";
    }
    return 0;
}