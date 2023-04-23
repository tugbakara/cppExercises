#include <iostream>
using namespace std;
int g = 0; //global
void fun()
{
    int g = 10; //local
    g++;
    {
        int g = 5; //local
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;
}
int main()
{
    fun();
    cout<<g<<endl; //global
}
