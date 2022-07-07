
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int thirdmax(int arr[] , int n , int k){
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    if(n > 3){
        return arr[k-1];
    }
    else{
        return arr[0];
    }
}

int main(){
    int arr[]={1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<thirdmax(arr,n,3);
    return 0;
}
    
