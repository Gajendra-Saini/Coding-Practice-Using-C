#include <iostream>
using namespace std;
class car
{
public:
    virtual void start() = 0;

    virtual void stop() = 0;
};
class innova : public car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }
    void stop()
    {
        cout << "innova stopped" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }
    void stop()
    {
        cout << "swift stopped" << endl;
    }
};
int main()
{

    car *p = new innova();
    p->start();
    p->stop();
    p = new swift();
    p->start();
    p->stop();
    return 0;
}