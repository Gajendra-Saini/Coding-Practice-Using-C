#include <iostream>
using namespace std;
class innova
{
public:
    int price = 50;
    int getprice()
    {
        return price;
    }
};
int main()
{

    innova buy;
    cout << buy.price << endl; // in this first you have to buy this to find it's price

    return 0;
}
// differnece between static and non static members
#include <iostream>
using namespace std;
class innova
{
public:
    static int price;
    static int getprice()
    {
        return price;
    }
};
int innova::price = 50;

int main()
{
    cout << innova::getprice() << endl; // in this first chcek price then buy if you wish
    return 0;
}