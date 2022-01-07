#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;

public:
    employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    int getid() { return id; }
    string getstring() { return name; }
};
class fulltimeemployee : public employee
{
private:
    int salery;

public:
    fulltimeemployee(int id, string name, int salery) : employee(id, name) // this is calling the employee constructor
    {
        this->salery = salery;
    }
    int getsalery() { return salery; }
};
class parttimeemployee : public employee
{
private:
    int wage;

public:
    int getwage() { return wage; }

    parttimeemployee(int id, string name, int wage) : employee(id, name) // this is calling the employee constructor
    {
        this->wage = wage;
    }
};
int main()
{
    fulltimeemployee f1(1, "john", 5000);
    parttimeemployee p1(2, "Raj", 300);
    cout << "Salary of john is " << f1.getsalery() << endl;
    cout << "wage of Raj is " << p1.getwage() << endl;
    return 0;
}