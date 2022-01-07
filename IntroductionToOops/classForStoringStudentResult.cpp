#include <iostream>
using namespace std;
class student
{
private:
    int m1, m2, m3;

public:
    student(int m1, int m2, int m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    int sum()
    {
        return (m1 + m2 + m3);
    }
    char grade()
    {
        float average = sum() / 3;
        if (average < 40)
        {
            return 'C';
        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'A';
        }
    }
};
int main()
{

    int rollno, m1, m2, m3;
    string name;
    cout << "Enter name " << endl;
    cin >> name;
    cin.ignore();
    cout << "Enter rollno " << endl;
    cin >> rollno;

    cout << "Enter marks " << endl;
    cin >> m1 >> m2 >> m3;

    student s(m1, m2, m3);
    cout << "total marks " << s.sum() << endl;
    cout << "grade is" << s.grade() << endl;
    return 0;
}