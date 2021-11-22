#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs("My_first_created.txt");
    // ofstream ofs("My_fist_createdtxt",ios::app)
    ofs<<"This is my first txt file that is created from c++ code."<<endl;
    ofs<<"An I hope I will find where it is after execution."<<endl;
    ofs<<"Bye, 46656!"<<endl;
    ofs.close();
}
/* When you open a file, if it doesn't exist program will create a new file. If already a file is there, all the content that related to file will be removed. */