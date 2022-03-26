#include <iostream>

using namespace std;
void sort(int *A , int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0 ; j < n-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j] , A[j+1]);
            }
        }
    }
}
int max_Sum(int *A , int n)
{
    sort(A,n);
    int sum=0;
    for(int i=0; i < n; i++)
    {
        sum=sum+(i*A[i]);
    }
    return sum;
}
int main()
{
    int A[]={9,5,4,2,1};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<max_Sum(A,n)<<endl;

    return 0;
}
