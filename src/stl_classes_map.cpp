#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Marie"));
    m.insert(pair<int,string>(3,"Bella"));
    m.insert(pair<int,string>(4,"Taylor"));
    map<int,string>::iterator itr;
    for(itr = m.begin();itr != m.end();itr++) // displaying all the members.
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int,string>::iterator itr1;
    itr1 = m.find(3); // finds third of the list.
    cout<<itr1->first<<" "<<itr1->second<<endl;
}