#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }    
}
int main()
{
    int t = 3;
    fun(t);
}

/* In recursive functions, there must be a condition that will
terminate recursion, otherwise it goes infinite calling. */