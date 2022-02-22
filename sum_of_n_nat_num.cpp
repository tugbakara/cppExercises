#include<iostream>
using namespace std;
int sum(int n)
{   
    if(n == 0)
        return 0;
    return sum(n-1)+n;
}
int main()
{
    int a = 5;
    cout<<"Sum of n natural number by using recursion is: "<<sum(a)<<endl;
}