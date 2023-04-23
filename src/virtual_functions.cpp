#include <iostream>
using namespace std;
class Base
{
    public:
    /* void fun()
    {
        cout<<"Fun of Base."<<endl;
    } */
    virtual void fun() // When we add virtual to function, then when we called overriding functions it runs its object function.
    {
        cout<<"Fun of Base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void fun(){
        cout<<"Fun of Derived."<<endl;
    }
};
int main()
{
    Base *p = new Derived();
    p->fun();
}