#include <iostream>
using namespace std;
int *createArray(int size)
{
    int *p = new int[size];
    for(int i = 0; i<size; i++)
        p[i] = i+1;
    return p;
}
int main()
{
    int *ptr = createArray(5);
    for(int i = 0; i<5; i++)
    cout<<ptr[i]<<endl;
    return 0;
}