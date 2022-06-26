#include <iostream>

using namespace std;
int subsequence(int A[] ,  int n)
{
    int count=0;
    for(int i=0; i < n-1; i++)
    {
        for(int j=0 ; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j] ,A[j+1]);
            }
        }
    }
    for(int i=0; i < n; i++)
    {
        if(A[i+1] - A[i]==1)
        {
            count++;
        }
       
    }
    
    return count;
   
}
void print_Array(int A[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
    int A[]={3,4,9,10,1,2};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<subsequence(A,n);
    
    //subsequence(A,n);
    //print_Array(A,n);
    
    return 0;
}
