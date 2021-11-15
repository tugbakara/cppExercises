#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default base class constructor called by default."<<endl;
    }
    Base(int x)
    {
        cout<<"Parameterized base class constructor was called."<<endl<<x<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Default derived class constructor called by default."<<endl;
    }
    Derived(int a)
    {
        cout<<"Parameterized derived class constructor was called."<<endl<<a<<endl;
    }
    Derived(int x, int a) : Base(x)
    {
        cout<<"Parameterized base and derived class constructors were called."<<endl<<a<<endl;
    }
};
int main()
{
    Derived d(10,20);
}
/* We can call parameterized constructor of base class from derived class constructor. If we didn't mention it , always base class constructor will be dafult type. */