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
    cout<<"f lambda:"<<endl;
    f(6.0f,6); // calling function
    cout<<"-----"<<endl;
    cout<<"hello lambda:"<<endl;
    [](){cout<<"Hello"<<endl;}(); // defining and calling function
    cout<<"-----"<<endl;
    cout<<"summation lambda:"<<endl;
    [](int x, int y){cout<<x+y<<endl;}(10,5); // defining + calling
    cout<<"-----"<<endl;
    auto c = [](){cout<<"XYZ"<<endl;}; // defining function
    cout<<"c in func lambda:"<<endl;
    func(c); // calling lambda function in another function as a parameter.
    cout<<"-----"<<endl;
    double d = 0.23;
    int e = 23;
    int s = [](int d, int e)->int{return d+e;}(0,0);
    cout<<"s lambda:"<<endl;
    cout<<s<<endl;
}
