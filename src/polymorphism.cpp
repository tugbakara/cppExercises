#include <iostream>
using namespace std;
class BasicCar
{
    public:
    virtual void start() = 0; // pure  virtual function
};
class Innova: public BasicCar
{
    public:
    void start()
    {
        cout<<"Innova started."<<endl;
    }
};
class Swift: public BasicCar
{
    public:
    void start()
    {
        cout<<"Swift started."<<endl;
    }
};
int main()
{
    BasicCar *c = new Innova();
    c->start();
    c = new Swift();
    c->start();
}
// You have to make function overriding to achieve polymorphism.
/* there are two same line that called as c->start(); but their functions are different and this is called as polymorphism.
Also in abstract classes , we cannot create object of that class. */