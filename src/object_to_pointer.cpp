#include <iostream>
using namespace std;
class Recatangle
{
    public:
    int l,b;
    int area()
    {
        return l*b;
    }
    int perimeter()
    {
        return 2*(l+b);
    }
};
int main ()
{
    Recatangle r; // Creating an object in stack.
    Recatangle *p, *ptr;  // Creating an object in stack.
    p = &r;
    ptr = new Recatangle; //  // Creating an object in heap.
    p->b = 10;
    p->l = 5;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    ptr->l = 3;
    ptr->b = 10;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
}