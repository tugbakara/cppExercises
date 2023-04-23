#include<iostream>
using namespace std;

class Array
{
    private:
    int *A;
    int size;
    int length;

    public:
    Array(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void create()
    {
        cout<<"enter the length of an array: "<<flush;
        cin>>length;
        cout<<"enter the elements of an array:"<<endl;
        for(int i = 0;i<length;i++)
        {
            cout<<i<<". element of an array is :"<<flush;
            cin>>A[i];
        }
    }
    void display()
    {
        for(int i = 0;i<length;i++)
            cout<<A[i]<<" ";
    }
    ~Array()
    {
        delete []A;
        cout<<endl<<"Array is deleted!";
    }
};
int main()
{
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    Array arr(size);
    arr.create();
    arr.display();
}