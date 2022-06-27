
#include <iostream>

using namespace std;
void print_array(int A[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<" ";
}
void shiftnegative(int A[] , int n)
{
    int start=0;
    int end=n-1;
    while(start < end)
    {
        if(A[start] < 0)
        {
            start++;
        }
        else if (A[end] > 0)
        {
            end--;
        }
        else
        {
            swap(A[start] , A[end]);
        }
    }
}
int main()
{
    int A[]={3,2,4,1,5,-1,-7,-9};
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    shiftnegative(A,n);

    return 0;
