#include <iostream>
using namespace std;
class Outer
{
/*  private:
    class Inner
        {
            public:
            Inner()
            {
                cout<< "Inner class constructer has been created."<<endl;
            }
            void displayInner()
            {
                cout<<"Inner class has been displayed."<<endl;
            }
        };  */
    public:
    Outer()
    {
        cout<<"Outer class constructer has been created!"<<endl;
    }
    class Inner
    {
        public:
        Inner()
        {
            cout<< "Inner class constructer has been created."<<endl;
        }
        void displayInner()
        {
            cout<<"Inner class has been displayed."<<endl;
        }
    };   
};
int main()
{
    Outer::Inner objInn;
    objInn.displayInner();
    Outer objOut;
}
/* Inner class can access the static data members of the outer class. Outer class can access all the public members of inner class.
Inner class object must be initialized after the class definiton itself.
If you don't wanna visible inner class, you can place it in private . */