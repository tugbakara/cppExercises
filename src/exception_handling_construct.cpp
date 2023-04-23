#include <iostream>
using namespace  std;
int main()
{
    int a = 10,b = 2,c;
    try
    {
        if(b == 0)
            throw 1;
        c = int (a/b);
        cout<<"Division is : "<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error "<<e<<endl;
    }      
} 