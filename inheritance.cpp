/*                          Basic cpp class - inheritance example,
                                                author: tugbakara                               */
#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int l = 0, int b = 0);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    ~Rectangle();
};
Rectangle::Rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}
int Rectangle::getBreadth()
{
    return length;
}
int Rectangle::getLength()
{
    return breadth;
}
void Rectangle::setLength(int length)
{
    this->length = length;
}
void Rectangle::setBreadth(int breadth)
{
    this->breadth = breadth;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length + breadth);
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle destructor was called."<<endl;
}
class Cuboid : public Rectangle
{
    private:
    int height;
    public:
    Cuboid(int length = 0,int breadth = 0,int height = 0);
    int getHeight();
    void setHeight(int heigth);
    int volume();
    friend ostream &operator<<(ostream &op,Cuboid &c);
    ~Cuboid();
};
Cuboid::Cuboid(int length, int breadth, int height)
{
    setBreadth(breadth);
    setLength(length);
    setHeight(height);
}
void Cuboid::setHeight(int height)
{
    this->height = height;
}
int Cuboid::getHeight()
{
    return height;
}
int Cuboid::volume()
{
    return getHeight()*getLength()*getBreadth();
}
ostream &operator<<(ostream &op, Cuboid &c)
{
    return op;
}
Cuboid::~Cuboid()
{
    cout<<"Cuboid destructor was called."<<endl;
}
int main()
{
    Cuboid c(1,5,10);
    cout<<"Volume: "<<c.volume()<<endl;
    cout<<"Dimensions of cuboid h = "<<c.getHeight()<<" l = "<<c.getLength()<<" b = "<<c.getBreadth()<<endl;
}