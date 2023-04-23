#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s = {3,5,13,10,11};
    s.insert(7);
    s.insert(8);
    s.erase(5);
    // displaying s' values:
    cout<<"Using set iterator class: "<<endl;
    set<int>::iterator itr;
    for(itr = s.begin();itr != s.end();itr++)
        cout<<*itr<<endl;
        //In this class we cannot modify the values of set.
    cout<<"Using for each loop: "<<endl;
    for(int x:s)
        cout<<x<<endl;
}