#include <iostream>
using namespace std;

class student
{
public:
    static int rollno;
    static int dis_rollno()
    {
        rollno++;
        return rollno;
    }
};
int student::rollno = 0;
int main()
{

    cout << student::dis_rollno() << endl;
    cout << student::dis_rollno() << endl;

    return 0;
}