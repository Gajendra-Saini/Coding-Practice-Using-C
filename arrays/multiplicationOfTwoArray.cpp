#include <iostream>
using namespace std;

int main()
{
    // first take two matrices as input

    cout << "*** first matrice ***" << endl;
    int r1, c1;
    cout << "Enter first matrices rows and column " << endl;
    cin >> r1 >> c1;
    int first[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter "
                 << "(" << i << "," << j << ")"
                 << "  :";
            cin >> first[i][j];
        }
    }

    cout << "*** second matrice ***" << endl;
    int r2, c2;
    cout << "Enter second matrices rows and column " << endl;
    cin >> r2 >> c2;
    int second[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter "
                 << "(" << i << "," << j << ")"
                 << "  :";
            cin >> second[i][j];
        }
    }

    // now making a new array for storing the result
    int result[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    cout << "result is " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            // we need a third loop to add values in it
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}