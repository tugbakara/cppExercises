#include<iostream>
using namespace std;
void pointerArit()
{
    int A[] = {2,4,6,8,10,12};
    int *p = A;
    p = p+1;
    cout<<*p<<endl;
    p = p+3;
    cout<<p[-4];
}
int main()
{
    pointerArit();
    int x = 1;
    int *y = &x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<*y<<endl;
    return 0;
}