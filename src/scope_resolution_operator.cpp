#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int l = 1, int b = 1)
    {
        setDataL(l);
        setDataB(b);
    }
    void setDataL(int l)
    {
        length = l;
    }
    void setDataB(int b)
    {
        breadth = b;
    }
    int area()
    {
        return breadth*length;
    }
    int perimeter();
};
int Rectangle::perimeter() // Scope resolution operator is :: , and this shows that the scope of the function is within this class.
{
    return 2*(length+breadth);
}
int main()
{
    Rectangle r(10,2);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}
/* If the loops are present in our code, we should NOT write them inside the class. We should write
that body outside the class only. 
scope : faaliyet alanı */
