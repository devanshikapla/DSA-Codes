#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int count(int a){
    int count=0;
    while(a){
        if(a & 1){
            count=count+1;
        
        }
        a=a >> 1;
        
    }
    return count;
}
int comp(int a , int b){
    int count1=count(a);
    int count2=count(b);
    if(count1 <= count2){
        return false;
    }
    return true;
}
void print_array(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void sortbysetbits(int arr[], int n){
    sort(arr,arr+n , comp);
}
int main()
{
    //cout<<"Hello World";
    int arr[]={5,2,3,9,4,6,7,15,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortbysetbits(arr,n);
    print_array(arr,n);

    return 0;
}
