#include <iostream>

using namespace std;

void mergeTwoHalf(int A[] , int n)
{
    int half=0;
    int temp[n];
    for(int i=0; i < n-1 ; i++)
    {
        if(A[i] > A[i+1])
        {
            half=i+1;
            break;
        }
    }
    if(half==0)
    {
        return;
    }
    int i=0, j=half ,k=0;
    while(i<half && j < n)
    {
        if(A[i] < A[j])
        {
            temp[k++]=A[i++];
        }
        else
        {
            temp[k++]=A[j++];
        }
    }
    while(i < half)
    {
        temp[k++]=A[i++];
    }
    while(j<n)
    {
        temp[k++]=A[j++];
    }
    for(int i=0; i < n; i++)
    {
        A[i]=temp[i];
    }
}
void print_array(int A[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
int main()
{
    int A[]={-4 , 6, 9 , -1 , 3 };
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    mergeTwoHalf(A,n);
    print_array(A,n);
    return 0;
}
