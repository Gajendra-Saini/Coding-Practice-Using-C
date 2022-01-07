// static variable are those they work for 2 function but their container is same means one thing works for multiply things

#include <iostream>
using namespace std;
class fun
{
public:
    int a;
    static int count;

    fun()
    {
        a = 20;
        count++;
        cout << a << " fun" << count << endl;
    }
    void display()
    {
        cout << count << endl;
    }
    static int func()
    {
        return count;
    }
};
int fun::count = 0;

int main()
{

    fun f1, f2;
    // f1.count = 30;
    cout << f1.count << endl;
    cout << f2.count << endl;

    cout << "display function works" << endl;
    f1.display();
    f2.display();
    cout << fun::func() << endl;
    cout << f1.func() << endl;
    return 0;
}