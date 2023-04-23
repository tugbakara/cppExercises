#include <iostream>
using namespace std;
class Parent
{
    public:
    void Display()
    {
        cout<<"Display of Parent."<<endl;
    }
};
class Child: public Parent
{
    public:
    void Display()
    {
        cout<<"Display of Child."<<endl;
    }
};
int main()
{
    Parent p;
    Child c;
    p.Display();
    c.Display();
    c.Parent::Display();
}
/* Writing function with the same name in the child class is called as function overiding.*/