#include <iostream>

using namespace std;

void print_array(int *A , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
void reverseArray(int *A , int start , int end)
{
    int temp=A[start];
    A[start]=A[end];
    A[end]=temp;
    start++;
    end--;
}
void rotate_Array(int A[] , int d, int n)
{
    if(d==0)
    {
        return;
    }
    d=d%n;
    reverseArray(A ,0 ,d-1);
    reverseArray(A,d , n-1);
    reverseArray(A,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,7,4,3,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    rotate_Array(arr,d,n);
    print_array(arr,n);
    return 0;
}
