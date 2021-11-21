#include <iostream>
using namespace std;
class B;
class A
{
    private: int a;
    protected: int b;
    public: int c;
        friend B;
};
class B
{
    public:
    A obj;
    void fun()
    {
        obj.a = 0;
        obj.b = 2;
        obj.c = 4;
    }
};
int main()
{ }