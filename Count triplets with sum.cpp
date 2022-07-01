#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int count_triplet(int A[] ,  int n, int sum)
{
    int ans=0;
    for(int i=0; i < n-2 ; i++)
    {
        for(int j=i+1; j < n-1 ; j++)
        {
            for(int k=j+1; k < n; k++)
            {
                if(A[i] + A[j] + A[k] < sum)
                {
                    //cout<<A[i]<<A[j]<<A[k]<<endl;
                    ans++;
                }
            }
        }
    }
    return ans;
}
int main()
{
    //cout<<"Hello World";
    int arr[] = { 5, 1, 3, 4, 7 };
    int n = sizeof arr / sizeof arr[0];
    int sum = 12;
    cout<<count_triplet(arr,n,sum)<<endl;

    return 0;
}
