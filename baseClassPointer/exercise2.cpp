#include <iostream>
using namespace std;

class basiccar
{
public:
    void fun1()
    {
        cout << "basic car started" << endl;
    }
};
class advancecar : public basiccar
{
public:
    void fun2()
    {
        cout << "advance car playing music" << endl;
    }
};

int main()
{

    advancecar a;
    basiccar *ptr = &a;
    ptr->fun1();
    // ptr->fun2(); //how a basic car playing music , basic car cann't access advancecar functionz

    return 0;
}