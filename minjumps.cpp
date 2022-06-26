#include<iostream>
#include<climits>
using namespace std;

int min_jumps(int A[] , int n)
{
    int jump[n-1];
    if(n==0 || A[0]==0)
    {
        return INT_MAX;
    }
    jump[0]=0;
    for(int i=0; i <= n; i++)
    {
        for(int j=0; j < i; j++)
        {
            if(i <= j + A[j] && jump[j]!=INT_MAX)
            {
                jump[i]=min(jump[i] , jump[j]+1);
                break;
            }
        }
    }
    return jump[n-1];
}
int main()
{
    int A[]={2,3,1,4,9,8,3,2,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<min_jumps(A,n);
    return 0;
}
