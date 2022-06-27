#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int subarray(int A[] , int n)
{
    unordered_set<int> s;
    int sum=0;
    for(int i=0; i < n; i++)
    {
        sum=sum+A[i];
        if(sum==0)
        {
            return true;
        }
        if(s.find(sum)!=s.end())
        {
            return true;
        }
        s.insert(sum);
    }
    return sum;
}
void print_array(int A[],int n)
{
    for(int i=0; i < n ;i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<" ";
}
int main()
{
    int A[]={4,2,3,-1,6};
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    cout<<subarray(A,n);
    
}
