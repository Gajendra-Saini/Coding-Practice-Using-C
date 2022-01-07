// global variable can access by any function and remain in memory as long as the programme is running

// static variable not accessable by any function only those function in which they are created but works as global variable

#include <iostream>
using namespace std;
void fun()
{
    static int v = 0;
    int a = 5;
    v++;
    cout << a << " " << v << endl;
}
int main()
{
    fun();
    fun();
    fun();

    return 0;
}