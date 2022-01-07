#include <iostream>
using namespace std;
class derived;

class base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend derived;
};
class derived
{
    base b;
    void display()
    {
        b.a = 1;
        b.b = 2;
        b.c = 3;
    }
};

int main()
{

    return 0;
}