// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int x=0;
        int y=0;
        //int max=arr[0];
        for(int i=0; i < n; i++){
            if(i%2==0){
                x=max(x+arr[i] , y);
            }
            else
            {
                y=max(x,y+arr[i]);
            }
        }
        return max(x,y);
    }
    
};
