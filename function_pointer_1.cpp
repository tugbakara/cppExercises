#include <iostream>
using namespace std;
int maxii(int x, int y)
{
    cout<<"max: "<<(x>y?x:y)<<endl;
}

int minii(int x, int y)
{
    cout<<"min: "<<(x<y?x:y)<<endl;
}

int main()
{
    int (*fP)(int,int); // function pointer
    fP = maxii;
    (*fP)(10,5);
    fP = minii;
    (*fP)(10,5);
}
// A function pointer can point on all functions which have same signature.