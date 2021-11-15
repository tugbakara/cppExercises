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
        int b = 11;
        int c = 11;
    }

};
class C: public B
{
    public:
    void funC()
    {
        int b = 23;
        int c = 23;
    }
    
};
int main()
{
    C obj;
}