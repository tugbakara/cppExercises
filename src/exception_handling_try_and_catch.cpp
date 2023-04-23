#include <iostream>
using namespace std;
int division(int x, int y)
{
    if(y == 0)
        throw 1;
    return x/y;
}
int main()
{
    int a = 10,b = 2 ,c;
    try
    {
        c = division(a,b);
        cout<<"Result is: "<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division error: "<<e<<endl;
    }
    cout<<"Calculation was done!"<<endl;
}