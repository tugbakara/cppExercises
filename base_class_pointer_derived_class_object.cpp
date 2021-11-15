#include <iostream>
using namespace std;
class Base
{
    public:
    void fun1()
    {
        int a = 10;
    }
};
class Derived: public Base
{
    public:
    void fun2()
    {
        int b = 0;
    }
};
int main()
{
    Base *p;
    p = new Derived();
    p->fun1();
    // p->fun2(); yapamayız.
}
/* When you have a pointer of base class, you can call any functions which are present inside the base class. You cannot call
the functions which are present inside the derived class. */