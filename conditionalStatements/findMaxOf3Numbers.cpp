#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "Max is " << n1;
    }
    else if (n2 > n3)
    {

        cout << "Max is " << n2;
    }
    else
    {
        cout << "Max is " << n3;
    }
    return 0;
}