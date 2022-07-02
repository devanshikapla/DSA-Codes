#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print_array(int A[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void rotate(int A[] , int n)
{
    int temp=A[0];
    for(int i=0; i < n-1; i++)
    {
        A[i]=A[i+1];
    }
    A[n-1]=temp;
}
void left(int A[] , int n, int d){
    for(int i=0; i < d; i++)
    {
        rotate(A,n);
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    left(A,n,3);
    print_array(A,n);
    int x=2;
    for(int i=0; i < n; i++){
        if(A[i]==x){
            cout<<i<<endl;
        }
    }
    return 0;
}
