#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "display of base" << endl;
    }
};
class derived : public base
{
public:
    // void display()
    // {
    //     cout << "display of derived" << endl;
    // }
};
int main()
{
    base b;
    b.display();
    derived d;
    d.display();

    return 0;
}