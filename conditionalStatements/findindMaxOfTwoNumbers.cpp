// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     cout << "Max is " << (n1 > n2 ? n1 : n2) << endl;
//     return 0;
// }
// other meathod using if else statements

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "Max is " << n1;
    }
    else
    {
        cout << "Max is " << n2;
    }
    return 0;
}