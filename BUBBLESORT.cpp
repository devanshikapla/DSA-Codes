#include <iostream>

using namespace std;

void print_array(int *A , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n"<<endl;
}

void BubbleSort(int *A , int n)
{
    int temp;
    for (int i=0; i < n-1 ; i++)
    {
        for (int j=0; j<(n-i-1) ; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
    int A[]={5,6,7,8,9,2,0,1};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"The original Array before sorting "<<endl;
    print_array(A,n);
    cout<<"Array after sorting "<<endl;
    BubbleSort(A,n);
    print_array(A,n);

    return 0;
}
