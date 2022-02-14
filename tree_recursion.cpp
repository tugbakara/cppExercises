#include<iostream>
using namespace std;
void fn(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fn(n-1);
        fn(n-1);
    }
}
int main()
{
    int a = 3;
    fn(a);
}
/* In tree recursion, if the function is calling
itself more than one time, it is called as tree recursion. */

/* In the tree recursion, time complexity depends on the number of calls and 
space complexity depends on the max. height of the stack. */
