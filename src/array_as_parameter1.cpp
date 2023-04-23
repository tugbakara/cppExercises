#include<iostream>
using namespace std;
/* If the complier doesn't have the ability of defining a function's return type as array ( [] ) then we can put * for this but
in that case return type of the function becomes everything. */
int []fun(int A[],int n)
{
    for (int i = 0;i<n;i++)
        cout<<A[i]<<endl;
}
int main()
{
    int B[5] = {2,4,6,8,10};
    fun(B,5);
}