#include <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y, int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    int c = add(2,5,8);
    cout<<c<<endl;
    int a = add(2,5);
    cout<<a<<endl;
    float f = add(2.f,5.4f);
    cout<<f<<endl;
    return 0;
}