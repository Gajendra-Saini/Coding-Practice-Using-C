#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {{1, 2}, {1, 2}};
    int b[2][2] = {{3, 4}, {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int c[i][j];
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}