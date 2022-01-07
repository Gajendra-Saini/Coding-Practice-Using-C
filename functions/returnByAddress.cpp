// so one function created memory in heap and other also use this memory

#include <iostream>
using namespace std;
int *func(int x)
{
    int *p = new int[x];
    p[0] = 1;
    cout << *p << endl; // same address as ptr pointing
    return p;
}
int main()
{
    int *ptr = func(5);   // this will also point same as p pointing to array
    cout << *ptr << endl; // same address as p pointing

    return 0;
}