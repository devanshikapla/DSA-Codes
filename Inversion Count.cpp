#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int inversion_count(int A[] , int n)
{
    int inversion=0;
    for(int i=1; i < n; i++)
    {
        for(int j=0; j < i; j++)
        {
            if(A[i] > A[j])
            {
                inversion++;
            }
        }
    }
    return inversion;
}

int main()
{
    int A[]={1,20,6,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<inversion_count(A,n);
    return 0;
}
