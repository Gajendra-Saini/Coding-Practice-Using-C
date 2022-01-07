#include <iostream>
using namespace std;

class unknown
{
public:
    int un = 50;
};
class first
{
public:
    int x = 10;
    void display()
    {
        cout << "first " << x << endl;
    }
};
class second : public first
{
public:
    int y = 20;
    void display()
    {
        cout << "second " << x << " " << y << endl;
    }
};
class third : public unknown, second
{
public:
    int z = 30;
    void display()
    {
        cout << "third " << x << " " << y << " " << z << " " << un << endl;
    }
};
int main()
{
    third th;
    th.display(); // third is inherit from second so it can also access first

    return 0;
}