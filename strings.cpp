#include<iostream>
using namespace std;
int main()
{
    char d[30];
    cout<<"Enter a name pls:"<<endl;
    // cin.get(d,30);
    cin>>d; // In this method only first word can be taken to overcome this issue:
    // cin.getline(d,30); // In this method all of thw word can be taken.
    cout<<d<<endl;
    return 0;
}