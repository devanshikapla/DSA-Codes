#include <iostream>
using namespace std;

int min_swap(int A[] , int n, int k)
{
    int count=0;
    for(int i=0; i < n; i++)
    {
        if(A[i] <= k)
        {
            count++;
        }
    }
    int temp=0;
    for(int i=0; i < n; i++)
    {
        if(A[i] > k )
        {
            temp++;
        }
    }
    int ans=temp;
    for(int i=0; i < n; i++)
    {
        for(int j=count; j < n; j++)
        {
            if(A[i] > k)
            {
                temp--;
            }
            if(A[i] > k)
            {
                temp++;
            }
            ans=min(ans,temp);
        }
    }
    return ans;
}
int main()
{
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << min_swap(arr, n, k) << "\n";
    
    int arr1[] = {2, 7, 9, 5, 8, 7, 4};
    n = sizeof(arr1) / sizeof(arr1[0]);
    k = 5;
    cout << min_swap(arr1, n, k);
     
}
