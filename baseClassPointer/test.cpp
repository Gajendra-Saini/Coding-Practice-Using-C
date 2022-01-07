#include <iostream>
using namespace std;
class base
{
public:
    void fun1() {}
    void fun2() {}
    void fun3() {}
};
class derived : public base
{
public:
    void fun4() {}
    void fun5() {}
    void fun6() {}
};
 int main()
{

    // derived *p= new base(); // so derived class cann't use base class as object only base class use derived class as object

    return 0;
}