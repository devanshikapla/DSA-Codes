#include <iostream>

using namespace std;
int search(int arr[] , int key , int size)
{
    for(int i=0; i < size; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int x=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=search(arr , x,size);
    if(result==-1)
    {
        cout<<"The element is not present in the array"<<endl;
    }
    else
    {
        cout<<"The element is present in the array "<<result;
    }
    return 0;
}
