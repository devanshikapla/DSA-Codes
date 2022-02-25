#include <iostream>

using namespace std;

void sort(int A[] , int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j] , A[j+1]);
            }
        }
    }
}
int extra_element(int A[] , int B[] , int n,int m)
{
    sort(A,n);
    sort(B,m);
    for(int i=0; i < n; i++)
    {
        if(A[i] == B[i])
        {
            continue;
        }
        else
        {
            return i;
        }
    }
}
int main()
{
    int A[]={2,4,5,7,8,6,10,0};
    int B[]={2,4,5,7,9,0,10,6,8};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);

    int k=extra_element(A,B,n,m);
    cout<<k<<endl;
}
