#include <iostream>
using namespace std;
void fun()
{
    cout<<"HELLO"<<endl;
}
int main()
{
    void (*fP)(); // decleration
    fP = fun; // initialization
    (*fP)(); // calling
    return 0;
}