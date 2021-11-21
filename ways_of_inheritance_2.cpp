#include <iostream>
using namespace std;
class A 
{
    private: int a;
    protected: int b;
    public: int c;
    void fun()
    {
        int a = 0;
        int b = 1;
        int c = 2;
    }
};
class B: private A
{
    private:
    protected:
    public:
    void funn()
    {
        // int a = 11; private olduğu için class içinde dahi erişilemez.
        b = 11;
        c = 11;
    }

};
class C: public B
{
    public:
    void funC()
    {
        // b = 23;
        // c = 23;
    }
    
};
int main()
{
    C obj;
}