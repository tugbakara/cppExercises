#include <iostream>
using namespace std;
template <class T>
T maxi(T x, T y)
{
    if(x > y)
    return x;
    else
    return y;
}
int main()
{
    cout<<maxi(5.4f,6.7f);
    cout<<maxi(5,4);
    return 0;
}
// when the number of parameters are same but the data type is different, we can use templates. Templates work with any type of data.

