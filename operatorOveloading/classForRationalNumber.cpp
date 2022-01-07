#include <iostream>
using namespace std;

class rationalNum
{
private:
    int p;
    int q;

public:
    rationalNum(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }
    // display programme
    friend ostream &operator<<(ostream &o, rationalNum &c);
    // add programme
    friend rationalNum operator+(rationalNum n1, rationalNum n2);
};
ostream &operator<<(ostream &o, rationalNum &n)
{
    o << n.p << "/" << n.q;
    return o;
}
rationalNum operator+(rationalNum n1, rationalNum n2)
{
    rationalNum temp;
    temp.p = n1.p * n2.q + n2.p * n1.q;
    temp.q = n1.q * n2.q;
    return temp;
}

int main()
{
    rationalNum n1(2, 3);
    rationalNum n2(5, 6);
    rationalNum n3 = n1 + n2;
    cout << n1 << "+" << n2 << "=" << n3 << endl;

    return 0;
}