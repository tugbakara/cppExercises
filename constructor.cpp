#include <iostream>
using namespace  std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l = 0, int b = 0) // parameterized constructor function
    {
        setDataL(l);
        setDataB(b);
    }
    Rectangle(Rectangle &rect) // copy constructor function
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    void setDataL(int l) // mutator function
    {
        if(l>0)
        length = l;
        else
        cout<<"Invalid input"<<endl;
    }
    void setDataB(int b) // mutator function
    {
        if(b>0)
        breadth = b;
        else
        cout<<"Invalid input"<<endl;
    }
    int getDataL() // accessor function
    {
        return length;
    }
    int getDataB() // accessor function
    {
        return breadth;
    }
    int area() // facilitator function
    {
        return length*breadth;
    }
    int perimeter() // facilitator function
    {
        return 2*(length +  breadth);
    }
};
int main()
{
    // Rectangle r;
    // Rectangle r();  non-parameterized
    Rectangle r(10,2); // parameterized
    Rectangle r2(r); // copy constructor
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}