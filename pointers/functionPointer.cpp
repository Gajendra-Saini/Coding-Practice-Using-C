#include <iostream>
using namespace std;
int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a > b ? b : a;
}
int main()
{

    int (*ptr)(int, int);

    ptr = max; // calling max function
    cout << (*ptr)(10, 5) << endl;
    ptr = min;
    cout << (*ptr)(15, 2);
    return 0;
}