#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifs; // reading the file
    ifs.open("My_first_created.txt");
    if(!ifs) // or if(ifs.is_open()) can be used
        cout<<"File is not opened."<<endl;
    string st1,st2,st3;
    getline(ifs,st1);
    getline(ifs,st2);
    getline(ifs,st3);
    ifs.close();
    cout<<"1st: "<<st1<<endl<<"2nd: "<<st2<<endl<<"3rd: "<<st3<<endl;
    if(ifs.eof()) // Once you have finished reading a file, you have reached the end of file so sometimes we need to check whether we reached the end of the file or nor to check this we write this if statement.
        cout<<"End of file."<<endl;
}