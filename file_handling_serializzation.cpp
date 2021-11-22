#include <fstream>
#include <iostream>
using namespace std;
class Student
{
    public:
    string name, branch;
    int rollNo;
    friend ifstream &operator>>(ifstream &opt,Student &s);
    friend ofstream &operator<<(ofstream &opt,Student &s);
};
ifstream &operator>>(ifstream &opt,Student &s)
{
    opt>>s.name>>s.rollNo>>s.branch;
    return opt;
}
ofstream &operator<<(ofstream &opt,Student &s)
{
    opt<<s.name<<endl<<s.rollNo<<endl<<s.branch<<endl;
    return opt;
}
int main()
{
    Student s;
    s.name = "Marie";
    s.rollNo = 12;
    s.branch  = "CS";
    ofstream ofs("Student.txt",ios::trunc);
    ofs<<s;
    ofs.close();
    ifstream ifs;
    ifs>>s;
    ifs.close();
    cout<<"Name: "<<s.name<<endl<<"roll num.: "<<s.rollNo<<endl<<"Brnach: "<<s.branch<<endl;
}