#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}
int main()
{
    int a = 98;
    cout<<fun(a)<<endl;
}