#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
void build_heap(int arr[] , int n){
    int start_index=(n/2)-1;
    for(int i=start_index ; i >= 0 ; i--){
        heapify(arr,n,i);
    }
}

void print_heap(int arr[] , int n){
    for(int i=0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //cout<<"Hello World";
    int arr[]={1,3,5,4,6,13,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    build_heap(arr,n);
    print_heap(arr,n);
    return 0;
}
