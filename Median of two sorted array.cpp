#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void merge(int Arr1[] , int Arr2[] , int Arr3[],int n, int m)
{
//	int Arr3[n+m];
	int i=0;
	int j=0;
	int k=0;
	
	while(i < n && j < m)
	{
		if(Arr1[i] < Arr2[j])
		{
			Arr3[k]=Arr1[i];
			k++;
			i++;
		}
		else
		{
			Arr3[k]=Arr2[j];
			k++;
			j++;
		}
		
	}
	while(i < n)
	{
		Arr3[k++]=Arr1[i++];
	}
	while( j < m)
	{
		Arr3[k++]=Arr2[j++];
	}
	
}
void print_Array(int A[] ,  int n)
{
	for(int i=0; i < n; i++)
	{
		cout<<A[i]<<endl;
	}
	cout<<" ";
}
int main(int argc, char** argv) {
	
	int Arr1[]={1,3,5,7};
	int Arr2[]={2,4,6,8};
	int n=sizeof(Arr1)/sizeof(Arr1[0]);
	int m=sizeof(Arr2)/sizeof(Arr2[0]);
	int Arr3[n+m];
	
    	merge(Arr1 ,Arr2,Arr3,n,m);
    	print_Array(Arr3,n+m);
    	int start=0;
    	int end=n+m-1;
    	cout<<Arr3[(start+end)/2];
	
	return 0;
}
