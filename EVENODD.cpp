#include<iostream>
using namespace std;
//Asscending merge sort
void merge(int *arr, int start, int ending)
 {

    int mid = (start+ending)/2;

    int length1 = mid - start + 1;
    int length2 = ending - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    int mainArrayIndex = start;
    for(int i=0; i<length1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<length2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < length1 && index2 < length2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < length1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < length2 )
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}
//Descending merge sort
void merge_desc(int *arr, int start, int ending)
 {

    int mid = (start+ending)/2;

    int length1 = mid - start + 1;
    int length2 = ending - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    int mainArrayIndex = start;
    for(int i=0; i<length1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<length2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < length1 && index2 < length2)
    {
        if(first[index1] >= second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < length1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < length2 )
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}
void mergeSort_desc(int *arr, int start, int ending) {

    
    if(start >= ending) {
        return;
    }

    int mid = (start+ending)/2;


    mergeSort_desc(arr, start, mid);

   
    mergeSort_desc(arr, mid+1, ending);

   
    merge_desc(arr, start, ending);

}
void mergeSort_asce(int *arr, int start, int ending) {

    
    if(start >= ending) {
        return;
    }

    int mid = (start+ending)/2;


    mergeSort_asce(arr, start, mid);

   
    mergeSort_asce(arr, mid+1, ending);

   
    merge(arr, start, ending);

}
void print_array(int *arr ,int n)
{
    for(int i=0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={5,4,6,7,8,9,9,0,2,1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_array(arr, n);
    int even=0;
    int odd=0;
    int odd1=0;
    if(n%2==1)
    {
        odd=n/2;
        odd1=odd;
    }
    else if(n%2==1)
    {
        odd=(n/2)+1;
        odd1=odd;
    }
    int arr1[n];
    for(int i=0; i <n ;i++)
    {
        if(i%2==0)
        {
            even=i/2;
            arr1[even]=arr[i];
            even++;
        }
        else
        {
            arr1[odd]=arr[even];
            odd++;
        }
        
    }
    print_array(arr1,n);
    mergeSort_asce(arr1,0,even-1);
    mergeSort_desc(arr1,odd1, n-1);
    print_array(arr1 ,n);
    return 0;
}
