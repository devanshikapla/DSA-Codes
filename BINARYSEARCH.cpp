#include <iostream>

using namespace std;
int binarySearch(int arr[] , int key , int size)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
void print_array(int arr[] ,int size)
{
    for(int i=0; i < size ; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n";
}
int main()
{
    int even[]={2,4,6,8,10,12,14,16,18};
    int odd[]={1,3,5,7,9,11,13,15,17,19};
    int size=sizeof(even)/sizeof(even[0]);
    cout<<"The even array inputed is : "<<endl;
    print_array(even,size);
    cout<<"The index of element searched is "<<endl;
    int key=18;
    int index=binarySearch(even,18 , size);
    cout<<index<<endl;
    int j=9;
    cout<<"The odd array inputed is : "<<endl;
    print_array(odd,size);
    int k=binarySearch(odd,9,size);
    cout<<"The index of element searched is "<<endl;
    cout<<k;

    return 0;
}
