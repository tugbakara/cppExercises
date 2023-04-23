#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int l = 0, int b = 0);
    void setDataL(int l);
    void setDataB(int b);
    int area()
    {
        return length*breadth;
    }
    inline int perimeter(); /* bu fonksiyon normalde inlinesiz class'ın dışında tanımlanmış ama başındaki inline ifadesiyle classın dışında tanımlanmış olmasına rağmen inline oldu. */
};
int main()
{
    Rectangle r(10,2);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;    
}
Rectangle::Rectangle(int l,int b)
{
    setDataB(b);
    setDataL(l);
}
void Rectangle::setDataL(int l)
{
    length = l;
}
void Rectangle::setDataB(int b)
{
    breadth = b;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}