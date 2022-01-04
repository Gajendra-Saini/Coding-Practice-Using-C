#include <iostream>
using namespace std;
typedef int num; // ;uses of typedef to make code clear
enum day         // enum is use to define to group off constants
{
    mon,
    tue,
    wed,
    thr,
    fri,
    sat,
    sun
};
int main()
{
    num n1 = 10, n2 = 20;
    cout << n1 << " " << n2 << endl;

    cout << mon << endl;
    cout << sat << endl;

    return 0;
}