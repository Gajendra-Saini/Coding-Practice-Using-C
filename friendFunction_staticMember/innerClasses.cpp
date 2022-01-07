#include <iostream>
using namespace std;
class outer
{
public:
    void fun()
    {
        i.display();
    }
    class inner
    {
    public:
        void display()
        {
            cout << "display of inner" << endl;
        }
    };
    inner i;
};
int main()
{
    // access inner class
    outer::inner o;
    o.display();
    // accessinner class through outer class
    outer out;
    out.fun();

    return 0;
}