#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int length = 0, int breadth = 0)
    {
        this->length = length; /* constructor içindeki değerler ile private olan değerlerin isimleri yanı olduğu için bu karıışıklığı önlemek amaçlı this-> kullanılıyor ve kullanıldığı yerdeki veri private değeri gösteriyor. */
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    return 0;
}