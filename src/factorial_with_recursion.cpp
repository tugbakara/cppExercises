#include<iostream>
using namespace std;
int fact(int n)
{
    if( n == 0 || n == 1)
        return 1;
    return fact(n-1)*n;
}
int main()
{
    int a = 4;
    cout<<"Factorial of the %d"<<a<<" by using recurison is: "<<fact(a)<<endl;
}