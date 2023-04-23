#include <iostream>
using namespace std;
class A
{
    private: int aA;
    protected: int bA;
    public: int cA;
    void funA()
    {
        int aA = 10;
        int bA = 2;
        int cA = 0;
    }
};
class B : public A
{
    public: 
    void funB()
    {
        // int aA = 5; private olduğu için erişemeyiz.
        int bA = 5; // protected olsa da class'da erişilebilir.
        int cA = 5;
    }
};
class C: public B
{
    public:
    void funC()
    {
        // int aA = 4; private olduğu için erişemeyiz.
        int bA = 4;  // B yi public olarak aldığı için B deki protected veri (A nın protected'ı) C'ye geçebilir.
        int cA = 4;
    }

};
int main()
{
    C obj;
    // obj.aA = 0; private olduğu için erişemeyiz ne objeyle ne de classla.-    
    // obj.bA = 0; obje erişemez ama o objenin classı protected veriye erişebilir.
    obj.cA = 0;
    return 0;
}