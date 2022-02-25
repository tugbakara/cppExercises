#include<iostream>
#include"header/factorial.h"
using namespace std;
/* using formula */
int fC(int n,int r)
{
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2*t3);
}
/*using recursion with the help of Pascal triangle */
int rC(int n,int r)
{
    if(n == r || r == 0)
        return 1;
    else
        return rC(n-1,r-1)+rC(n-1,r);
}
int main()
{
    int n=5,r=2;
    cout<<"Using formula: "<<fC(n,r)<<endl;
    cout<<"Using recursion: "<<rC(n,r)<<endl;
}
