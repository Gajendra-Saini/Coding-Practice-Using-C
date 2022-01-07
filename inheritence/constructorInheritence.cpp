#include <iostream>
using namespace std;
class base
{
public:
    int x;
    base()
    {
        cout << "non param of base\n";
    }
    base(int x)
    {
        cout << "param of base " << x << endl;
    }
};
class derived : public base
{
public:
    int y;
    derived()
    {
        cout << "non param of derived" << endl;
    }
    derived(int y) : base(x)
    {
        cout << "param of derived " << y << endl;
    }
    derived(int x, int y) : base(x)
    {
        cout << "param of derived " << y << endl;
    }
};
int main()
{
    derived d;
    cout << endl;
    derived d1(5);
    cout << endl;
    derived d2(2, 6);

    return 0;
}