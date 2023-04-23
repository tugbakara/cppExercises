#pragma once
#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__
#include<iostream>
using namespace std;
int fact(int n)
{
    if( n == 0 || n == 1)
        return 1;
    return fact(n-1)*n;
}
#endif