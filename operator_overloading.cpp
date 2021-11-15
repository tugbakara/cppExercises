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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    friend ostream &operator<<(ostream &op,Complex &c);
};
ostream &operator<<(ostream &op,Complex &c)
{
    Complex t;
    t.real = c.real;
    t.img = c.img;
    op<<t.real<<"+ i"<<t.img<<endl;
    return op;
}
int main()
{
    Complex c1(5,6);
    Complex c2(2,4);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3;
    operator<<(cout,c3); // bu şekilde de çağırılabilir.
    return 0;
}
/* If the operating function has two different parameter from two different type of objects so it can not belong to class member so we have to make it as friend function. */