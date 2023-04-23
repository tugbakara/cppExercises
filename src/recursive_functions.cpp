#include <iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
        //fun(n-1);
    }
}
int main()
{
    int n = 5;
    fun(n);
}
/* Every recursive function must have some condition so that it terminates after some call. */