#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int temp = num;
    int sum = 0;
    while (num > 0)
    {
        int v = num % 10;
        num = num / 10;
        sum += v * v * v;
    }
    if (sum == temp)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not armstrong number";
    }

    return 0;
}