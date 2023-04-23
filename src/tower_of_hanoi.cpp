#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"from ("<<A<<") to ("<<B<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int n = 3;
    int A = 1, B = 2, C = 3;
    TOH(n,A,B,C);
}