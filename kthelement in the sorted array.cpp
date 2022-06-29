
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthelement(int A[] , int B[], int n, int m, int k)
{
    int sorted[m+n];
    int i=0;
    int j=0; 
    int h=0;
    while( i < m && j < m)
    {
        if(A[i] < A[j])
        {
            sorted[h++]=A[i++];
        }
        else
        {
            sorted[h++]=B[j++];
        }
    }
    while( i < m)
    {
        sorted[h++]=A[i++];
    }
    while( j < n)
    {
        sorted[h++]=B[j++];
    }
    return sorted[k-1];
}
int main()
{
    int A[]={2,3,6,7,9};
    int B[]={1,4,8,10};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    int k=5;
    cout<<kthelement(A,B,n,m,k);
    return 0;
}
