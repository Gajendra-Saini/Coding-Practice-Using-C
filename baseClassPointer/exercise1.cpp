#include <iostream>
using namespace std;
class base
{
private:
    int x;

public:
    void fun1()
    {
        cout << "display of base class" << endl;
    }
};
class derived : public base
{
private:
    int y;

public:
    void fun2()
    {
        cout << "display of derived class" << endl;
    }
};
int main()
{
    // derived d;
    // d.fun1();
    // d.fun2();

    derived d;
    base *p=&d;
    p->fun1();
    // p->fun2(); // this give error only base class pointer can access base class function not derived class 


    return 0;
}