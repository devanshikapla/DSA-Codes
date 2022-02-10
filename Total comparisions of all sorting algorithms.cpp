#include<iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

void print_Array(int arr[] , int n)
{
    for(int i=0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*SELECTION SORT */
int selection_sort(int arr[] , int n , int count , int Tot_count)
{

     cout<<"Selection sort"<<endl;
     for (int i=0; i < (n-1);i++)
     {
         int indexof_min , temp;
         indexof_min = i;
         for (int j=i+1; j < n; j++)
         {
             if(arr[j] < arr[indexof_min])
             {
                 indexof_min = j;
                 count++;
             }

         }
         temp = arr[i];
         arr[i]=arr[indexof_min];
         arr[indexof_min] = temp;
     }
     return count;

}
/*MERGE SORT*/
int merge(int *arr, int start, int ending , int count)
 {

    int mid = (start+ending)/2;

    int length1 = mid - start + 1;
    int length2 = ending - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    int mainArrayIndex = start;
    for(int i=0; i<length1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<length2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }


    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < length1 && index2 < length2)
    {
        count++;
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < length1)
    {
        count++;
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < length2 )
    {
        count++;
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    return count;

}

int mergeSort(int *arr, int start, int ending, int count) {

    int mid = (start+ending)/2;

    if(start >= ending)
    {
        return -1;
    }
    else
    {

        mergeSort(arr, start, mid , count);


        mergeSort(arr, mid+1, ending, count);


        count=merge(arr, start, ending,count);
    }
    return count;

}
/*INSERTION SORT*/
int insertion_sort(int *arr , int n , int count)
{
    int key , j;
    cout<<"Insertion Sort"<<endl;
    for(int i=1; i <= (n-1); i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j] >key)
        {
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        arr[j+1]=key;
    }
    return count;
}
/*QUICK SORT*/
int partition_array(int arr[] , int start , int ending)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1 ; i <= ending; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[pivotIndex] , arr[start]);
    int i=start , j=ending;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++] , arr[j--]);
        }
    }
    return (i+1);
}
void quickSort(int arr[] , int start , int ending)
{
    if (start >= ending)
    {
        return;
    }
    int p=partition_array(arr,start, ending);
    quickSort(arr , start , p-1);
    quickSort(arr , p+1 ,ending);
}
/*BUBBLE SORT*/
int bubble_sort(int *arr,int n,int end,bool swapped,int count,int tcount)
{

    if(end ==0)
    {
        cout<<"total count = "<<tcount<<endl;
        return count;

    }
    for(int i=0;i<end;i++)
    {
        if(arr[i]>arr[i + 1])
        {
            swap(arr[i],arr[i+1]);
            count++;
            swapped=true;
        }
    }
    if(swapped==false)
    {
        return count ;
    }
    tcount++;
    bubble_sort(arr,n,end - 1,swapped,count,tcount);
}
int main()
{
    int arr[]={1,4,5,6,7,8,9,3,2,0,100,98,45,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_Array(arr,n);
    cout<<"OPTIONS are : "<<endl;
    cout<<"1.SELECTION SORT "<<endl;
    cout<<"2.MERGE SORT "<<endl;
    cout<<"3.INSERTION SORT "<<endl;
    cout<<"4.QUICK SORT "<<endl;
    cout<<"5.BUBBLE SORT "<<endl;
    int choice;
    bool swapped=false;
    int count=0;
    int tcount=0;
    cout<<"ENTER YOUR CHOICE "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Swapped counts : " <<endl;
            cout<<selection_sort(arr,n,count,tcount);
            cout<<"\n";
            print_Array(arr , n);
        }
    case 2:
        {
            cout<<"Swapped counts : " <<endl;
            cout<<mergeSort(arr , 0 , n-1,count );
            cout<<"\n";
            print_Array(arr , n);
        }
    case 3:
        {
            cout<<"Swapped counts : " <<endl;
            cout<<insertion_sort(arr, n, count);
            cout<<"\n";
            print_Array(arr , n);
        }
    case 4:
        {
            cout<<"Swapped counts : " <<endl;
            quickSort(arr,0,n-1);
            cout<<"\n";
            print_Array(arr , n);
        }
    case 5:
        {
            cout<<"Swapped counts : " <<endl;
            cout<<bubble_sort(arr,n,n - 1,swapped,count,tcount);
            cout<<"\n";
            print_Array(arr , n);
        }

    }
    return 0;
}
