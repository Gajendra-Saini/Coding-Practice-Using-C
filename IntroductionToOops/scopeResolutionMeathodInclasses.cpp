#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    int getlength() { return length; }
    int getbreadth() { return breadth; }

    void setlength(int length);
    void setbreadth(int breadth);
    int area();
    int perimeter();
    rectangle(int x, int y);
};

int main()
{

    rectangle r1(5, 6);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r1.getlength() << endl;
    cout << r1.getbreadth() << endl;

    return 0;
}
void rectangle::setlength(int length)
{
    this->length = length;
}
void rectangle::setbreadth(int breadth)
{
    this->breadth = breadth;
}
int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}
rectangle::rectangle(int x, int y)
{
    setlength(x);
    setbreadth(y);
}
