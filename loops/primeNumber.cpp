#include <iostream>
#include <cmath>
using namespace std;
// meathod 1
// int main()
// {
//     int num;
//     cin >> num;
//     int temp = 0;
//     for (int i = 2; i <= (num / 2); i++)
//     {
//         if (num % i == 0)
//         {
//             temp = 1;
//         }
//     }
//     if (temp == 1)
//     {
//         cout << "not prime";
//     }
//     else
//     {
//         cout << "prime";
//     }
//     return 0;
// }
// second meathod
int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "not prime" << endl;
            return 0;
        }
    }
    cout << "prime" << endl;
    return 0;
}
