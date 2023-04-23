#include <iostream>
using namespace std;
int main()
{
    // formatting for output streams: endl or /n.
    cout<<endl;
    // cout<<"/n";

    /* for data types, for example 
    int --> hex,oct,dec
    float --> fixed, scientific
    etc.
    */
   int x = 163;
   float y = 125.731f;
    cout<<"Hexadecimal form of "<<x<<" is: "<<hex<<x<<endl;
    cout<<"Scientific form of number "<<y<< " is: "<<scientific<<y<<endl;
}