#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // x = y oluyor ve y ekstra memory harcamıyor yani x'in diğer adı y olmuş oluyor ve y'yi başka bilinmeyene eşitlersek hata verir:
    // int &y = z; gibi.
    cout<<x<<" "<<y<<endl;
    int a = x; // data of x equals to a
    x = 25; // address of x takes the value 25 
    cout<<x<<" "<<a<<endl;
    return 0;
}