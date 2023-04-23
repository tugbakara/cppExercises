#include<iostream>
#include "header/access_2D_Array_for_loop.h"
using namespace std;
/* There are three types of creating 2D array methods. */
int main()
{
    /* First method: In that method memory is allocated in stack only and values' 
    addresses are allocated like a a single dimension array. */
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    /* Second method: In this method pointer of array will be created in stack and this array's
    members points the other arrays that's kept in heap. */
    int* B[3];
    B[0] = new int [4]{1,2,3,4};
    B[1] = new int [4]{1,1,1,1};
    B[2] = new int [4]{2,2,2,2};
    
    /* Third method (double pointer): In this method all the array is in heap.*/
    int **C;
    C = new int* [3];
    C[0] = new int [4]{25,25,2,5};
    C[1] = new int [4]{4,1,4,1};
    C[2] = new int [4]{99,999,9999,9};

    /* to acces these members in for loop*/
    
    accessForLoopArray2D1(A,3);
    accessForLoopArray2D2(B,3,4);
    accessForLoopArray2D2(C,3,4);
}