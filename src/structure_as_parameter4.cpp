#include<iostream>
using namespace std;
/* Normally, we cannot use pass by value with arrays but if we
put the array inside a structure then pass by value with structure, we can use it. */
struct Test
{
    int A[5];
    int n;
};
void fun(struct Test t1)
{
    cout<<t1.A[0]<<endl;
    t1.A[0] = 10;
    cout<<t1.A[0]<<endl;
}
int main()
{
    struct Test t = {{2,4,6,8,10},1};
    fun(t);
}