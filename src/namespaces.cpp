#include <iostream>
using namespace std;
namespace First
{
    void fun()
    {
        cout<<"First func!"<<endl;
    }
}
using namespace First;
namespace Second
{
    void fun()
    {
        cout<<"Second func!"<<endl;
    }
}
int main()
{
    fun(); // using namespace Second yapmadığımız için bu fun First'e aittir.
    Second::fun();
    First::fun();
    
}
