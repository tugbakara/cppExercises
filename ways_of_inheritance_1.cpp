#include <iostream>
using namespace std;
class A
{
    private: int a;
    protected: int b;
    public: int c;
};
class B: protected A
{   protected: // All the members of class A will come this scope.
    public:
    void fun() // and we can access them in class.
    {
        b = 0;
        c = 0;
    }
};
class C: public B
{
    public:
    void funn()
    {
        b = 1;
        c = 1;
    }
};
int main()
{
    C obj;
    // obj.c = 15;  c değeri de artık protected olduğu için obje üzerinden ya da C lassı üzerinden erişemeyiz.
    // Upon an object of a child class (B) we cannot access any of the members that are inheriting from parent class (A)
}