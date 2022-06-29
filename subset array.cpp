#include <iostream>
#include <bits/stdc++.h>


using namespace std;

bool issubset(int A[] ,  int B[] , int m , int n)
{
    int i=0;
    int j=0;
    
    for(int i=0; i < n; i++)
    {
        for(int j=0 ; j < m; j++)
        {
            if(B[j]==A[i])
            {
                break;
            }
        }
        if(j==m)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int A[]={11,1,13,21,3,7};
    int B[]={11,3,7,1};
    int m=sizeof(A)/sizeof(A[0]);
    int n=sizeof(B)/sizeof(B[0]);
    if(issubset(A, B, m, n)==true)
    {
        cout<<"A2[] is a subset of A1";
    }
    else
    {
        cout<<"A2 is not a subset of A1 ";
    }
    return 0;
}
