#include<iostream>
using namespace std;
///// CALL BY REFERENCE EXAMPLE /////
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle &r)
{
    return r.length*r.breadth;
}
int main()
{
    struct Rectangle r = {10,5};
    cout<<area(r)<<endl;
}