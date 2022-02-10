#include<iostream>
using namespace std;

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

void mergeSort(int *arr, int start, int ending) {

    
    if(start >= ending) {
        return;
    }

    int mid = (start+ending)/2;


    mergeSort(arr, start, mid);

   
    mergeSort(arr, mid+1, ending);

   
    merge(arr, start, ending);

}
void print_array(int *A ,int n)
{
    for(int i=0; i < n ; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main() {

   int A[]={1,6,7,8,9,4,3,2,0,9};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Array before sorting "<<endl;
    print_array(A, n);
    mergeSort(A,0, n-1);
    cout<<"Array after sorting "<<endl;
    print_array(A,n);


    return 0;
}
