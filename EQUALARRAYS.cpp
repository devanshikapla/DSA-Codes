#include <iostream>

using namespace std;

void print_array(int *A , int n)
{
    for(int i=0 ; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
void sort(int *A , int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j] , A[j+1]);
            }
        }
    }
}
int equal_array(int *A , int *B, int n, int m)
{
    sort(A,n);
    sort(B,n);
    
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(A[i]==B[j])
        {
            i++;
            j++;
           
            return 1;
        }
        else
        {
            return 0;
            
        }

    }

}
int main()
{
    int A[]={1,4,5,7,9,6,0};
    int B[]={1,4,5,9,7,6,0};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    int k=equal_array(A,B,n,m);
    cout<<k<<endl;

    return 0;
}
