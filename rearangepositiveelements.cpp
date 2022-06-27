#include <iostream>
#include <vector>
#include<bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void rearange(int A[] , int n)
{
	int k=0;
	int j=0;
	vector<int>pos;
	vector<int>neg;
	
	for(int i=0; i < n; i++)
	{
		if(A[i] > 0)
		{
			pos.push_back(A[i]);
		}
		
	}
	for(int i=0; i < n; i++)
	{
	   if(A[i] < 0)
	   {
	   		neg.push_back(A[i]);
	   }
	}
	for(int i=0; i < n; i++)
	{
		if(i%2==0)
		{
			if(j < pos.size())
			{
				A[i]=pos[j];
				j++;
			}
			else
			{
				A[i]=neg[k];
				k++;
			}
		}
		else
		{
			if(k < neg.size())
			{
				A[i]=neg[k];
				k++;
			}
			else
			{
				A[i]=pos[j];
				j++;
			}
		}
	}
	//return A[i];
}
void print_array(int A[] , int n)
{
	for(int i=0; i < n; i++)
	{
		cout<<A[i]<<endl;
	}
	cout<<" ";
}
int main() {
	int A[]={9,8,7,6,-1,-2,-3,0,-4};
	int n=sizeof(A)/sizeof(A[0]);
	

	rearange(A,n);
	print_array(A,n);
	
	return 0;
}
