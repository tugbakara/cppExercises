#include <iostream>
using namespace std;
void fun(const int &x, int &y) 
{
    //x++; we cannot do that operation because we use this parameter as a const variable.
    cout<<"Fun"<<x<<" "<<y<<endl;
}
int main()
{
    int a = 10,b = 0;
    fun(a,b);
    cout<<"Main"<<a<<" "<<b<<endl;
}