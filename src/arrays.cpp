#include <iostream>
using namespace std;
int main()
{
    int arrayDim;
    int *a = new int[arrayDim]; //Heap'de dynamic bir array oluşturuldu.
    cout<<"Enter dimension of a array: "<<endl;
    cin>>arrayDim;
    for(int i = 0; i < arrayDim; i++)
    {
        cout<<"Enter the "<<i<<". indice:"<<endl;
        cin>>a[i];
    }
    for(int i = 0; i < arrayDim; i++) 
    cout<<a[i];
    delete a; // Array silindi.
    return 0;
}
/* NOT!
loopdan daha hızlı bir yöntem:
    int recursion(int a){

    if (a != 10)
        a += recursion(a);

    return a; */