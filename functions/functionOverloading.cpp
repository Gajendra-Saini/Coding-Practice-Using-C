// overloading means differnt programme for differnet outputs

#include <iostream>
using namespace std;
int func(int x, int y)
{
    return x + y;
}
float func(float x, float y)
{
    return x + y;
}
int func(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    cout << func(5, 6) << endl;
    cout << func(5.6f, 7.5f) << endl;
    cout << func(5, 6, 8) << endl;

    return 0;
}