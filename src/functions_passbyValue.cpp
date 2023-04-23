#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"In function"<<"\n"<<a<<" "<<b<<endl;
}
int main()
{
    int x = 1, y = 6;
    cout<<"In main"<<"\n"<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After function calling:"<<"\n"<<x<<" "<<y<<endl;
    return 0;
}