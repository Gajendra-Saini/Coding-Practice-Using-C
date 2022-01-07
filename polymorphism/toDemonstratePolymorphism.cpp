// base class is shape and derived classes are rectangle and circle

#include <iostream>
using namespace std;

class shape
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};
class rectangle : public shape
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

class circle : public shape
{
private:
    int radius;

public:
    circle(int r)
    {
        radius = r;
    }
    int area()
    {
        return 3.1425 * radius * radius;
    }
    int perimeter()
    {
        return 2 * 3.1425 * radius;
    }
};

int main()
{
    shape *p = new rectangle(5, 6);
    cout << p->area() << endl;
    cout << p->perimeter() << endl;

    p = new circle(5);
    cout << p->area() << endl;
    cout << p->perimeter() << endl;

    return 0;
}
