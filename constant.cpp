#include <iostream>
using namespace std;
class Demo
{
    public:
    int x = 10, y = 0;
    void Display()const
    {
        // x++; because of const variable we cannot change the data member of the class.
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{

}