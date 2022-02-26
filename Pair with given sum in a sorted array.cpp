#include <iostream>

using namespace std;

int sum(int A[] ,  int n , int key)
{
    int count=0;
    for(int i=0; i < n; i++)
    {
        for(int j=i+1 ; j < n ;j++)
        {
            if(A[i] + A[j] == key)
            {
                count++;
            }
        }
    }
    if(count!=0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int A[]={1, 2, 3, 4, 5, 6, 7};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<sum(A,n,8);
    return 0;
}
