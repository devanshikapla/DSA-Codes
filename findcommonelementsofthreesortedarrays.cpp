#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void findcommon(int A1[] , int A2[] , int A3[] , int n1 , int n2,  int n3)
{
	int i=0;
	int j=0;
	int k=0;
	while(i < n1 && j < n2 && k < n3)
	{
		if(A1[i]==A2[j] && A2[j]==A3[k])
		{
			cout<<A1[i]<<" ";
			i++;
			j++;
			k++;
		}
		else if(A1[i] < A2[j])
		{
			i++;
		}
		else if(A2[j] < A3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
	}
}
int main(int argc, char** argv) {
	int A1[]={1,5,10,20,54,3,0,23};
	int A2[]={1,54,0,23,10,4,100};
	int A3[]={4,3,0,1,54,20,34,12};
	
	int n=sizeof(A1)/sizeof(A1[0]);
	int m=sizeof(A2)/sizeof(A2[0]);
	int k=sizeof(A3)/sizeof(A3[0]);
	
	sort(A1, A1+n);
	sort(A2,A2+m);
	sort(A3 , A3+k);
	
	findcommon(A1 ,A2,A3, n,m,k);
	
	return 0;
}
