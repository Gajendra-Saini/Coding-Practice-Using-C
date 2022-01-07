#include <iostream>
using namespace std;

class rectangle
{
public:
    int a;
    int *p;
    rectangle(int x)
    {
        a = x;
        p = new int[a];
        cout << p << endl;
        // return p; // a constructor cann't return a value remember it
    }
    rectangle(rectangle(&r))
    {
        a = r.a;
        // p = r.p; // same array pointing this
        p = new int[a]; // create differnt array and pointing on this
        cout << p << endl;
    }
};

int main()
{
    rectangle r1(5);
    rectangle r2(r1);

    return 0;
}