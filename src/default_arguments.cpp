#include <iostream>
using namespace std;
int add(int x, int y , int z = 0)
{
    return x+y+z;
}
int main()
{
    cout<<add(5,4,8)<<endl;
    cout<<add(2,5)<<endl;
    cout<<add(2,5,0)<<endl;
    return 0;
}
// You should start making the arguments as a default from rightmost to the left.