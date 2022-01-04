#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int temp = num;
    // while (num > 0)
    // {
    //     int v = num % 10;
    //     num = num / 10;
    //     sum = sum * 10 + v;
    // }
    if (temp == sum)
    {
        cout << "number is palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}