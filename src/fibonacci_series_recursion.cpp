#include<iostream>
using namespace std;
// First we start with recursive function , in that manner it takes order of 2^n times.
int rFib(int n)
{
    if( n<= 1)
        return n;
    return rFib(n-2)+rFib(n-1);
}
// Second, we use iterative function
int iFib(int n)
{
    int i,s,t0=0,t1=1;
    if(n<=1)
        return n;
    for(i=2;i<=n;i++)
    {
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;    
}
/* Third method is memoization. It is applied to reduce time issue coming from recursive function. */
int F[10];
int mFib(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
            F[n-2] = mFib(n-2);
        if(F[n-1] == -1)
            F[n-1] = mFib(n-1);
        return mFib(n-2)+mFib(n-1);
    }
}
int main()
{
    int n = 6;
    cout<<"Recursive function: "<<rFib(n)<<endl;
    cout<<"Iterative function: "<<iFib(n)<<endl;
    cout<<"Memoization method: "<<mFib(n)<<endl;
}