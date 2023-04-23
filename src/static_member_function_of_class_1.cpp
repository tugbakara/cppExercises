#include <iostream>
using namespace std;
class Student
{
    public:
    int rollNo;
    string name;
    static int addMi;
    Student(string name)
    {
        addMi++;
        rollNo = addMi;
        this->name = name;
        display();
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Roll Number: "<<rollNo<<endl;
    }
};
int Student::addMi = 0;
int main()
{
    Student s1("John");
    Student s2("Marie");
    Student s3("Maya");
    cout<<"Addmi number: "<<Student::addMi<<endl;
}
