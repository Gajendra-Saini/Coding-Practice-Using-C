#include <iostream>
using namespace std;
class checking
{
public:
    int x = 5;
    int y = 10;
    void display() constant
    {
        x++;

        cout << x << " " << y << endl;
    }
};
int main()
{

    checking chk;
    chk.display();

    return 0;
}