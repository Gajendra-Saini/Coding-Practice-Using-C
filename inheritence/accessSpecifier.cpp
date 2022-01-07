#include <iostream>
using namespace std;
class base
{
private:
    int x = 1;

protected:
    int y = 2;

public:
    int z = 3;
    void display()
    {
        cout << x << " " << y << " " << z << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        //  x=10; // derived class only access protected and public variable not privte
        y = 20;
        z = 30;
        cout << y << " " << z << endl;
    }
};
int main()
{

    base b;
    // b.x=1; // not access private and protected member using objext
    // b.y=2; // object cann't use private and protected members
    b.z = 3;
    b.display();
    derived d;
    d.z = 6;
    d.display();

    return 0;
}