#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//using memoization
int stairs(int n , int dp[])
{
    if(n<=1)
    {
        return dp[n]=1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=stairs(n-1 ,dp)+stairs(n-2, dp);
    return dp[n];
}
int count_ways(int n)
{
    int dp[n+1];
    memset(dp , -1 , sizeof dp);
    stairs(n,dp);
    return dp[n];
}
int main()
{
    int n=4;
    cout<<"Number of ways= "<<count_ways(n);
    return 0;
}
