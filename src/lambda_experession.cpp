#include <iostream>
using namespace std;
template<typename T>
void func(T p)
{
    p();
}
int main()
{
    auto f = [](float x, int y){cout<<x*y<<endl;}; // defining function
    f(6.0f,6); // calling function
    [](){cout<<"Hello"<<endl;}(); // defining and calling function
    [](int x, int y){cout<<x+y<<endl;}(10,5); // defining + calling
    auto c = [](){cout<<"XYZ"<<endl;}; // defining function
    func(c); // calling lambda function in another function as a parameter.
    double d = 0.23;
    int i = 23;
    int s = [](int d, int e)->int{return x+y;}(0,0);
    cout<<s<<endl;
}