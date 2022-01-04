//  the pattern looks like below
// * * * *
// * * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter rows " << endl;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}