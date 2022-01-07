#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "base class function" << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "derived class function" << endl;
    }
};
int main()
{
    base *p = new derived();
    p->display(); // In reality derived class is display because base class is pointing to derived class object but derived class is not display so we make base class as virtual

    return 0;
}