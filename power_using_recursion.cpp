#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if( n == 0)
        return 1;
    return pow(m,n-1)*m;
}
int main()
{
    int b = 3, p = 3;
    cout<<" %d to the power %d by using recursion is: "<<pow(b,p)<<endl;
}