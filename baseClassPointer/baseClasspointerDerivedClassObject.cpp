#include <iostream>
using namespace std;

 class base{
     public:
     void fun1(){}
     void fun2(){}
     void fun3(){}

 };
 class derived:public base{
     public:
     void fun4(){}
     void fun5(){}
     void fun6(){}
 };
 
int main(){

 base *p=new derived();

p->fun1();
p->fun2();
p->fun3();
// so base class pointer only access base class member
// p->fun4();
// p->fun5();
 
return 0;
}