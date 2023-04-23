#include <iostream>
using namespace std;
class Parent
{

};
class Child: public Parent
{

};
int main()
{
    try
    {
        throw Child();
    }
    catch(Child e)
    {
        cout<<"Child catch"<<endl;
    }
    catch(Parent e)
    {
        cout<<"Parent catch"<<endl;
    }
}
// We cannot change the catch order , child must be in first, parent must be after the child catch.