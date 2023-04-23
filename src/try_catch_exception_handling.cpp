#include <iostream>
using namespace std;
class MyException: public exception
{};
int division(int x, int y)throw(MyException)
{
    if(y == 0)
        throw MyException();
    return x/y;
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = division(a,b);
        cout<<"Result is: "<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by zero error."<<endl;        
    }
    cout<<"Calculation was done!"<<endl;
}