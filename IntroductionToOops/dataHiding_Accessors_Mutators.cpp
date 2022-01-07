#include <iostream>
using namespace std;

class rectangle
{
    // always make variable as private and only function are visible to user not data we use
private:
    int length;
    int breadth;

public:
    int setlength(int length) // set meathod is called mutators it is used to set the things
    {
        if (length > 0)
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
        if (breadth > 0)
        {
            this->breadth = breadth;
        }
        else
        {
            cout << "breadth cann't be negative";
            exit(0);
        }
    }
    int getlength() // get meathod is called accessors because we can access value with the help of it
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
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
    rectangle r;
    // r.length = 5; // gives error because length is private member of class
    // r.breadth = 6;
    r.setlength(-5);
    r.setbreadth(-6);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    cout << r.getlength() << endl;
    cout << r.getbreadth() << endl;

    return 0;
}