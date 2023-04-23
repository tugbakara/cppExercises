#include <iostream>
using namespace std;
class Parent final
{
    public:
    virtual void start() final
    {}
};
class Child: Parent
{
    public:
    void start()
    {}
};
int main()
{
    Child c;
}
/* One usage of final is restricting inheritance. Final functions (only virtuals) of parent class cannot be overrided in the child class.
All of above, cannot be executed because of the rules mentioned before.*/