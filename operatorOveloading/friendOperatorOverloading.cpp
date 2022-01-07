#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }
    friend complex operator+(complex c1, complex c2); // if we didnot make it friend then it is not accessable 
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1(5, 6);
    complex c2(8, 6);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}