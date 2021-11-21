#include <iostream>
using namespace std;
#define SQR(x) (x*x)
#define msg(x) #x
#define PI 3.1425
#ifndef PI
    #define PI 3
#endif
int main()
{
    cout<<"Function sqr: "<<SQR(5)<<endl;
    cout<<"Message function: "<<msg(Pamuk)<<endl;
    cout<<"PI: "<<PI<<endl;
    }

    