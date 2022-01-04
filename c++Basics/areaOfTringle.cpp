#include <iostream>
using namespace std;

int main()
{
    float length, breadth;
    cout << "Enter Length "
         << "and Breadth" << endl;
    cin >> length >> breadth;
    cout << "Area is  " << (length * breadth) / 2;
    return 0;
}