#include <iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout << "base fun1" << endl;
    }
    virtual void fun2() = 0;
};
class derived : public base
{
public:
    void fun2()
    {
        cout << "derived fun2" << endl;
    }
};
int main()
{

    base *p = new derived();
    p->fun2();
    return 0;
}