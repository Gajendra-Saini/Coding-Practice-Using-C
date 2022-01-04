#include <iostream>
using namespace std;

int main()
{
    // if number is 745 then display 7,6,5

    int num;
    cin >> num;
    cout << "digit is" << endl;
    while (num > 0)
    {
        int value = num % 10;
        num = num / 10;
        cout << value << endl;
    }

    return 0;
}