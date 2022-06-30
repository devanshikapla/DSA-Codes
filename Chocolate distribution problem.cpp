#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std; 

int find_min(int A[] , int n, int m)
{
    if(m==0 || n==0)
    {
        return 0;
    }
    sort(A , A+n);
    if(n < m)
    {
        return -1;
    }
    int min_diff=INT_MAX;
    
    for(int i=0; (i+m)-1 < n; i++)
    {
        int diff=A[(i+m)-1]-A[i];
        if(diff < min_diff)
        {
            min_diff=diff;
        }
        //return min_diff;
    }
    return min_diff;
}

int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << find_min(arr, n, m);
    
    return 0;
    
