#pragma once
#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include <iostream>
class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle(int l = 0, int b = 0);
    Rectangle(Rectangle &rect);
    void setDataL(int length);
    void setDataB(int breadth);
    int getDataL();
    int getDataB();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
Rectangle::Rectangle(int length , int breadth )
{
    setDataB(breadth);
    setDataL(length);
}
void Rectangle::setDataB(int breadth)
{
    this->breadth = breadth;
}
void Rectangle::setDataL(int length)
{
    this->length = length;
}
int Rectangle::getDataL()
{
    return length;
}
int Rectangle::getDataB()
{
    return breadth;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    std::cout<<"Destructor was called."<<std::endl;
}
#endif