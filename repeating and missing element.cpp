
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int repeating(int num[] , int n)
{
   sort(num , num+n);
   for(int i=0; i < n; i++)
   {
       if(num[i]==num[i-1])
       {
           return num[i];
       }
   }
   return -1;
}

int getmissing(int A[] , int n)
{
    int sum_n=n*(n+1)/2;
    int sum=0;
    for(int i=0; i < n-1; i++)
    {
        sum=sum+A[i];
    }
    return sum_n-sum;
}
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<repeating(arr,n)<<endl;
    int missing=getmissing(arr,n+1);
    cout<<missing<<endl;
    return 0;
}
