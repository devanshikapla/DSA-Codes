#include <iostream>

using namespace std;

void print_array(int *A , int n)
{
    for(int i=0 ; i <= n ; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}

void selection_sort(int *A, int n)
{
     cout<<"Selection sort"<<endl;
     for (int i=0; i < (n-1);i++)
     {
         int indexof_min , temp;
         indexof_min = i;
         for (int j=i+1; j < n; j++)
         {
             if(A[j] < A[indexof_min])
             {
                 indexof_min = j;
             }

         }
         temp = A[i];
         A[i]=A[indexof_min];
         A[indexof_min] = temp;
     }
}
int main()
{
    int A[]={1,4,5,6,7,8,0,2,1};
    int n=sizeof(A)/sizeof(A[0]);
    print_array(A,n);
    selection_sort(A,n);
    print_array(A,n);

    return 0;
}
