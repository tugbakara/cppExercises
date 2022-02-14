#include<iostream>
using namespace std;
//// CALL BY VALUE EXAMPLE /////
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1)
{
    /* ++r1.length; if we put something like this o/p will be 55 but the address of the actual (r)
    and formal (r1) parameters are different so r's 10 is constant even if we change the r1's 10.*/
    return r1.length*r1.breadth;   
}
int main()
{
    struct Rectangle r = {10,5};
    cout<<area(r)<<endl;
}