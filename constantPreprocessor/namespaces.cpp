#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "first namespace is called" << endl;
    }
} // namespace first
namespace second
{
    void fun()
    {
        cout << "second namespace is called" << endl;
    }
} // namespace second
using namespace first;
int main()
{
    fun();
    // first::fun();
    second::fun();

    return 0;
}