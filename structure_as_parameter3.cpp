#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void changLength(struct Rectangle *p,int l)
{
    p -> length = l;
    cout<<p->length<<endl;
}
int main()
{
    struct Rectangle r = {10,5};
    changLength(&r,20);
}