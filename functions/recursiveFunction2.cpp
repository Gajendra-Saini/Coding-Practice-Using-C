// recursive function means function calling itself

#include <iostream>
using namespace std;

int recursive_func(int x)
{
    if (x > 0)
    {
        recursive_func(x - 1); // function is calling itself
        cout << x << endl;
    }
}

int main()
{

    recursive_func(5);
    return 0;
}