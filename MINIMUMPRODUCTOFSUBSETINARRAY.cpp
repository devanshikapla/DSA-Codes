#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minProductSubset(int A[] , int n)
{
    if(n==1)
    {
        return A[0];
    }
    int max_negative=INT_MIN;
    int min_positive=INT_MAX;
    int count_negative=0;
    int count_zero=0;
    int product=1;

    for(int i=0; i < n; i++)
    {
        if(A[i]==0)
        {
            count_zero++;
            continue;
        }
        if(A[i] < 0)
        {
            count_negative++;
            max_negative=max(max_negative , A[i]);

        }
         if(A[i] > 0)
        {
            count_negative++;
            min_positive=min(min_positive , A[i]);

        }
        product=product*A[i];

    }
    if(count_zero==n || (count_negative==0 && count_zero > 0))
    {
        return 0;
    }
    if(count_negative==0)
    {
        return min_positive;
    }
    if (!(count_negative & 1) && count_negative != 0)
    {
        product = product / max_negative;
    }
    return product;
}
int main()
{
    int a[] = { -1, -1, -2, 4, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << minProductSubset(a, n);

    return 0;
}
