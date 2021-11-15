#include <iostream>
using namespace std;
void func()
{
    static int v = 0; /*static variables remains always in the memory, they are just like global variables,
    only the difference between them global can be accessable in everywhere, static is the only accessable 
    in the function that are declared.*/
    int a = 5;
    v++;
    cout<<a<<" "<<v<<endl;
}
int main()
{
    func();
    func();
    func();
}