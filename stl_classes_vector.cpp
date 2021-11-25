#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    vec.push_back(7);
    vec.push_back(8);
    vec.pop_back();
    // displaying vec elements:
    cout<<"Using vector iterator class:"<<endl;
    vector<int>::iterator itr;
    for(itr = vec.begin();itr != vec.end();itr++)
        //cout<<*itr<<endl;
        // If we write
        cout<<++*itr<<endl;
        // this command is also affect the variables values.
    cout<<"Using for each loop:"<<endl;
    for(int x:vec)
        cout<<x<<endl;
}