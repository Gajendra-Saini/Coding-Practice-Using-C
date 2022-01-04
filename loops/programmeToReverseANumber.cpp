#include <iostream>
using namespace std;

int main()
{
    // if number is 153 then you have to print 351

    int num;
    cin >> num;
    int sum = 0;
    while (num > 0)
    {
        int v = num % 10;
        num = num / 10;
        sum = sum * 10 + v;
    }
    cout << "num is " << sum << endl;
    return 0;
}