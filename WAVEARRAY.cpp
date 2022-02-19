#include <iostream>

using namespace std;

void print_Array(int A[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
void waveArray(int A[] , int n)
{
    int temp;
    for(int i=1; i < n; i=i+2)
    {
        if(A[i-1] < A[i])
        {
            temp=A[i-1];
            A[i-1]=A[i];
            A[i]=temp;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array before : "<<endl;
    print_Array(arr , n);
    cout<<"Array after applying wave :"<<endl;
    waveArray(arr , n);
    print_Array(arr,n);
    return 0;
}
