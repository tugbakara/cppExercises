#include <iostream>
#include <memory>
#include "header/Rectangle.h"
int main()
{
    std::unique_ptr<Rectangle> ptr1(new Rectangle(10,5));
    std::cout<<"Area of ptr1 Rectangle is : "<<ptr1->area()<<std::endl;
    std::unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr1);
    std::cout<<"Area of the ptr2 Rectangle is :"<<ptr2->area()<<std::endl;
    /* we cannot do that:
    ptr2 ptr1
    because only one pointer can point on an object. */
    std::shared_ptr<Rectangle> ptr3(new Rectangle(5,2));
    std::cout<<"Perimeter of ptr3 Rectangle is :"<<ptr3->perimeter()<<std::endl;
    std::shared_ptr<Rectangle> ptr4;
    /* In shared_ptr we can have more than one pointer can point on an object. */
    ptr4 = ptr3;
    std::cout<<"Perimeter of ptr4 Rectangle is :"<<ptr4->perimeter()<<std::endl;
    std::cout<<"Reference counter value is:"<<ptr3.use_count()<<std::endl;
}
