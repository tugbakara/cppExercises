#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int l = 0, int b = 0);
    Rectangle(Rectangle &rect);
    void setDataL(int l);
    void setDataB(int b);
    int getDataL();
    int getDataB();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    Rectangle r(10,10);
    cout<<"Area of the rectangle is : "<<r.area()<<endl;
    if(r.isSquare())  cout<<"This rectangle is square."<<endl;
    return 0;
}
Rectangle::Rectangle(int l , int b )
{
    setDataB(b);
    setDataL(l);
}
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}
void Rectangle::setDataL(int l)
{
    length = l;
}
void Rectangle::setDataB(int b)
{
    breadth = b;
}
int Rectangle::getDataL()
{
    return length;
}
int Rectangle::getDataB()
{
    return breadth;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Destructor was called."<<endl;
}