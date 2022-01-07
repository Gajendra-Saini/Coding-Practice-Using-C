// inheritence means inherit means jab koi kisi aur se kuch chiz laike kuch aur banaye ya phir uska pane programme mai use kre
#include <iostream>
using namespace std;
class base
{

public:
    int x = 10;
    void display()
    {
        cout << x << "base class" << endl;
    }
};
class derived : public base
{
private:
    int y = 20;

public:
    void display()
    {
        cout << x << "derived class" << y << endl;
    }
};

int main()
{

    base b;
    b.display();
    derived d;
    d.x = 50;
    d.display();

    return 0;
}