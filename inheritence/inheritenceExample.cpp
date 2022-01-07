// We have to find the area of a cuboid with the help of a rectangle

#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length = 0, int breadth = 0)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area();
    int perimeter();
    void setlength(int length);
    void setbreadth(int breadth);
    int getlength() { return length; }
    int getbreadth() { return breadth; }
};
int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}
void rectangle::setlength(int length)
{
    this->length = length;
}
void rectangle::setbreadth(int breadth)
{
    this->breadth = breadth;
}
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int length, int breadth, int height)
    {
        setlength(length);
        setbreadth(breadth);
        this->height = height;
    }
    int getheight() { return height; }
    int volume()
    {
        return getlength() * getbreadth() * getheight();
    }
};
int main()
{
    rectangle r(2, 3);
    cout << r.getlength() << endl;
    cout << r.getbreadth() << endl;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    cuboid c(5, 3, 4);
    cout << c.getlength() << endl;
    cout << c.getbreadth() << endl;
    cout << c.getheight() << endl;
    cout << c.area() << endl;
    cout << c.perimeter() << endl;
    cout << c.volume() << endl;

    return 0;
}