#include <iostream>
using namespace std;
float fun()
{
    return 2.45f;
}
int main()
{
    auto x = fun();
    cout<<"Auto fun result is: "<<x<<endl;
    int i = 1;
    double d = 5;
    char c = 's';
    auto a= 6 + i + d + c;
    cout<<"Auto variable is: "<<a<<endl;
    decltype(c) var = 'v';
    decltype(i) var1= 4;
    cout<<"var: "<<var<<endl<<"var1: "<<var1<<endl;
}