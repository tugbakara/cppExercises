#include <iostream>
using namespace std;
int &func(int &a)
{
    cout<<"In function: "<<"\n"<<a<<endl;
    return a;
}
int main()
{
    int x = 1;
    func(x);
    func(x) = 25; // Normalde oluşturulan fonksiyonu sola yazamayız ama bu fonksiyonda a'nın kendisi x olduğu için referans sayesinde yapabiliyoruz.
    cout<<"In main: "<<"\n"<<x<<endl;
    return 0;
}