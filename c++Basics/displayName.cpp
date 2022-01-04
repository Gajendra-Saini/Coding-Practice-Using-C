#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "Enter your name :" << endl;
    cin >> name;
    cout << "Welcomr Mr. " << name << endl;

    return 0;
}
// the problem of the programme is that it only read first letter of your name for eg. if you input gajendra saini the it only display gajendra so
// the solution of the problem is given below

// #include <iostream>
// using namespace std;

// int main()
// {
//     string name;
//     cout << "Enter your name :" << endl;
//     getline(cin, name);
//     cout << "Welcomr Mr." << name << endl;

//     return 0;
// }
