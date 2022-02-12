#include <iostream>

using namespace std;
void print_array(int *A , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
int peakIndex(int *A , int n)
{
    int start=0;
    int end= n-1;
    int mid=(start+end)/2;
    while(start < end)
    {
        if(A[mid] < A[mid+1])
        {
            start=mid+1;

        }
        else
        {
          end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}
int main()
{
    int A[]={1,2,3,6,3,1};
    int n=sizeof(A)/sizeof(A[0]);
    int index=peakIndex(A,n);
    cout<<"The array is "<<endl;
    print_array(A,n);
    cout<<"The index of the peak element is "<<endl;
    cout<<index;
    return 0;

}
