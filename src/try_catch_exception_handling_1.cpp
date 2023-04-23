#include <iostream>
using namespace std;
int division(int x, int y)throw(string)
{
    if(y == 0)
        throw string("Error is division by zero.");
    return x/y;
}
int main()
{
    int a = 10,b = 0,c;
    try
    {
        c = division(a,b);
        cout<<"Result is: "<<c<<endl;
    }
    catch(string e)
    {
        cout<<""<<e<<endl;    
    }
    cout<<"Calculation was done!"<<endl;
}