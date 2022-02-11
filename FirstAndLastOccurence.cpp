#include <iostream>

using namespace std;
int firstOccurance(int arr[],int n, int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start <=end)
    {
        if(arr[mid] == key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
void print_array(int arr[] , int n)
{
    for(int i=0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int lastOccurance(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4,5,4,4,4,4,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"First occurrence "<<firstOccurance(arr ,n,4);
    cout<<endl;
    cout<<"Last occurrence "<<lastOccurance(arr ,n,4);
    return 0;
}
