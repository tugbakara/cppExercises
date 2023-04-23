#include <iostream>
using namespace std;
class Demo
{
    int *p;
    public:
    Demo()
    {
        p = new int[10];
        cout<<"Object was created."<<endl;
    }
    ~Demo()
    {
        cout<<"Object was deleted.."<<endl;
        delete p;
    }
};
int main()
{
    Demo d;
}