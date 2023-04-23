#include <iostream>
using namespace std;
int x = 0; // global
int main()
{
    int x = 1; // local
    {
        int x = 2; // local
        cout<<x<<endl;
    }
    cout<<x<<endl; //local
    cout<<::x<<endl; // global
}
