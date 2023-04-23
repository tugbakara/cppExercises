#include <iostream>
using namespace std;
int main()
{
    int *p = new int [5];
    cout<<"p"<<endl;
    for (int i = 0;i<5;i++)
    {
        p[i] = i;
        cout<<p[i]<<endl;
    }
    int *q = new int [7];
    cout<<endl<<"q"<<endl;
    for(int i = 0;i<5;i++)
    {
        q[i] = p[i];
        cout<<q[i]<<endl;
    }
    delete []p;
    p = q;
    q = NULL;
}