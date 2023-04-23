#include <iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    static int count;
    Test()
    {
        int a = 0, b = 5;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Test::count;
int main()
{
    Test t1,t2;
    cout<<Test::getCount()<<endl;
    cout<<t1.getCount()<<endl;
    cout<<t2.getCount()<<endl;
}
/* Static member functions can only access static data member of a class, they cannot access non-static data members.
Static functions can be accessed using class name and also upon object of that class.*/
