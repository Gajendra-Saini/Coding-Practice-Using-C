#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }
    friend ostream &operator<<(ostream &o, complex &c);
};
ostream &operator<<(ostream &o, complex &c)
{
    o << c.real << " +i" << c.img << endl;
    return o;
}
int main()
{
    complex c(5, 6);
    cout << c << endl;

    return 0;
}