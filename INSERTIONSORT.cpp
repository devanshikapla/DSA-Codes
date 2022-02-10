#include <iostream>

using namespace std;

void print_array(int *A, int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}

void insertion_sort(int *A , int n)
{
    int key , j;
    cout<<"Insertion Sort"<<endl;
    for(int i=1; i <= (n-1); i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && A[j] >key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int A[]={1,4,5,3,2,2,1,9,0,7,6};
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    insertion_sort(A,n);
    print_array(A,n);

    return 0;
}
