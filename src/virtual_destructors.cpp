#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor"<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }
};
class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    Base *p = new Derived();
    delete p;
}
/* In c++, the functions are called depending on the pointer not upon the object, so only base class destructor will be called, derived class
will not be called. But suppose, we want to destructor of derived class should also be called.
For that we have to write down virtual in front of base class destructor. It means that, if you ahve written sth in the destructor the base classthat is for releasing the resources.
If you don't make it as virtual only the resources acquired by the base class will be released. */