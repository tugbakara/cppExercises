#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5,6};
    l.push_back(7);
    l.push_back(8);
    l.pop_back();
    // displaying l values:
    cout<<"List iterator class:"<<endl;
    list<int>::iterator itr;
    for(itr = l.begin();itr != l.end();itr++)
        cout<<++*itr<<endl;
    cout<<"Using for each loop:"<<endl;
    for(int x:l)
        cout<<x<<endl;
}