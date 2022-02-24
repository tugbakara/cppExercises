#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double num = 1, dnum = 1;
    double r = 0;
    if ( f == 0)
        return 1;
    r = e(x,n-1);
    num = num*x;  
    dnum = dnum*f;
    return r+num/dnum;
}
int main()
{
    int a = 2,b = 3;
    cout<<"Taylor series calculation using by recursion:"<<e(a,b)<<endl;
}