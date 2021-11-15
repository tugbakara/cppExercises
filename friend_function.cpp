#include <iostream>
using namespace std;
class Complex
{
    private:
    int real, img;
    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend Complex operator+(Complex c1,Complex c2);    
};
Complex operator+(Complex c1,Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    cout<<t.real<<" + i"<<t.img<<endl;
    return t;
}
int main()
{
    Complex c1(1,2),c2(3,4),c3;
    c3 = c1 + c2;
    return 0;    
}
/* Some operators can be overloaded as member of function of a class as well as friend functions. In friend functions, scope resolution(::) isn't used.