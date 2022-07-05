
#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void heapify(int arr [] , int n , int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left < n && arr[left] > arr[largest] ){
		largest=left;
	}
	if(right < n && arr[right] > arr[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(arr[i] , arr[largest]);
		heapify(arr,n,largest);
	}
}
void heap_Sort(int arr[] , int n){
	for(int i=n/2-1; i >= 0 ; i--){
		heapify(arr,n, i);
	}
	for(int i=n-1; i > 0 ; i--){
		swap(arr[0] ,arr[i]);
		heapify(arr,i,0);
	}
}
void print_heap(int arr[] , int n){
	for(int i=0; i < n; i++){
		cout<<arr[i]<<endl;
	}
}
int main(int argc, char** argv) {
	int arr[]={12,11,13,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	heap_Sort(arr,n);
	print_heap(arr,n);
	return 0;
}
