#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    rectangle(int x, int y)
    {
        length = x;
        breadth = y;
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
int main()
{

    rectangle r(5, 6);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}