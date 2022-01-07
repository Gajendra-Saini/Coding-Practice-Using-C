#include <iostream>
#define pi 3.1425;
#define hello "fire in my belly";
#define strprint(x) #x;
using namespace std;

int main()
{
    int radius = 5;
    cout << radius * radius * pi;

    cout << hello;
    cout << strprint(hello what are you doing);

    return 0;
}