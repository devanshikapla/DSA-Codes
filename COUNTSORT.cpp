#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int *A , int n)
{
    int max=INT_MIN;
    for(int i=0; i < n; i++)
    {
        if(max < A[i])
        {
            max=A[i];
        }
    }
    return max;
}
void countSort(int *A , int n)
{
    //finding the max element in A
    int max=maximum(A,n);
    int *count=new int[max+1];
    for(int i=0; i < max+1; i++)
    {
        count[i]=0;
    }
    for(int i=0; i < n; i++)
    {
        count[A[i]]=count[A[i]]+1;
    }
    int i=0;
    int j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
        {
            i++;
        }
    }

}
void print_array(int *A , int n)
{
    for(int i=0; i < n ; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}

int main()
{
    int A[]={9,0,4,5,6,7,3,2,1};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Original Array before sorting "<<endl;
    print_array(A,n);
    countSort(A,n);
    cout<<"Array after sorting "<<endl;
    print_array(A,n);
    return 0;
}
