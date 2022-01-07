#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    // constructor is used because there is some default value int the function
    rectangle(int length = 0, int breadth = 0)
    { // if value is not given then it will also work
        setlength(length);
        setbreadth(breadth);
    }
    rectangle(rectangle(&r))
    {
        length = r.length;
        breadth = r.breadth;
    }
    int setlength(int length) // set meathod is called mutators it is used to set the things
    {
        if (length >= 0)
        {
            this->length = length;
        }
        else
        {
            cout << "length cann't be negative";
            exit(0);
        }
    }
    int setbreadth(int breadth)
    {
        if (breadth >= 0)
        {
            this->breadth = breadth;
        }
        else
        {
            cout << "breadth cann't be negative";
            exit(0);
        }
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

    rectangle r1; // there is no need to give input default constructor
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << endl;
    rectangle r2(1, 2);
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    cout << endl;
    rectangle r3(1);
    cout << r3.area() << endl;
    cout << r3.perimeter() << endl;
    cout << endl;
    rectangle r4(r3); // this is taking reference from object r3
    cout << r4.area() << endl;
    cout << r4.perimeter() << endl;
    cout << endl;

    return 0;
}