#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 1, y = 2;
    cout<<"Before function:"<<"\n"<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"After function:"<<"\n"<<x<<" "<<y<<endl;
    return 0;
}