#include <iostream>

using namespace std;


void print_array(int arr[] , int n)
{
    for(int i=0 ; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<" ";
}
int partition_array(int arr[] , int start , int ending)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1 ; i <= ending; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[pivotIndex] , arr[start]);
    int i=start , j=ending;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[] , int start , int ending)
{
    if (start >= ending)
    {
        return;
    }
    int p=partition_array(arr,start, ending);
    quickSort(arr , start , p-1);
    quickSort(arr , p+1 ,ending);
}
int main()
{
    int arr[]={8,7,6,5,4,3,2,2,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before Sorting "<<endl;
    print_array(arr , n);
    cout<<"Array after sorting "<<endl;
    quickSort(arr , 0 , n-1);
    print_array(arr , n);
    return 0;
}
