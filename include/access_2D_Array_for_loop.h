#pragma once
#ifndef __ACCESS2DFORLOOP_H__
#define __ACCESS2DFORLOOP_H__
#include<iostream>
using namespace std;

void accessForLoopArray2D1(int (*A)[4],int m)
{
    int n = sizeof(*A)/sizeof(int);
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void accessForLoopArray2D2(int **A,int m,int n)
{
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

#endif