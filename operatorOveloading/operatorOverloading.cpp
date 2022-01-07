#include <iostream>
using namespace std;

// operator overloading means using user defined operator to do a operation

class complex
{
private:
    float real;
    float img;

public:
    complex(float x = 0, float y = 0)
    {
        real = x;
        img = y;
    }
    complex add(complex c) // this is taking first and second function as input and doing operator overlaoding we can use symbol also do that overloading
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};
int main()
{
    complex c1(2, 3);
    complex c2(4, 6);
    complex c3;
    c3 = c1.add(c2);
    c3.display();

    return 0;
}