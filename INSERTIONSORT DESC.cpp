
#include <iostream>

using namespace std;
/*Insertion sort in descending order*/
void print_Array(int *arr , int n)
{
    for(int i=0 ; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n";
}
void insertion_sort(int *arr , int n)
{
    int key , j;
    cout<<"Insertion Sort"<<endl;
    for(int i=1; i <=(n-1) ; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j] < key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
     int arr[]={1,4,5,3,2,2,1,9,0,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_Array(arr,n);
    insertion_sort(arr,n);
    print_Array(arr,n);

    return 0;
}
