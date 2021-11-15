#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    void setDataL(int l)
    {
        if(l>0)
        length = l;
        else
        cout<<"Invalid input for the length!"<<endl;
    }
    void setDataB(int b)
    {
        if(b>0)
        breadth = b;
        else
        cout<<"Invalid input for the breadth!"<<endl;
    }
    int getDataL()
    {
        return length;
    }
    int getDataB()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r;
    r.setDataB(10); // mutator
    r.setDataL(-5); //mutator
    cout<<r.getDataB()<<endl; // accessor
    cout<<r.getDataL()<<endl; // accessor
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}