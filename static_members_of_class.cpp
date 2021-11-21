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
        a = 0;
        b = 5;
        count++;
    }
};
int Test::count; // 0'a da eşitleyebiliriz.
int main()
{
    Test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
}
/* When you have a static variable in a class, you must declare it putside the class. It will only accessible inside the class.
Static members can be accessed using object, also class name if they are public.*/