#include <iostream>
using namespace std;
/*class */ struct fun // in class all members by default private but in struct all members by defalut are public
{
    int x = 10;
    void display(int b)
    {
        cout << x << " " << b << endl;
    }
};
int main()
{
    fun f;
    f.display(5);

    return 0;
}