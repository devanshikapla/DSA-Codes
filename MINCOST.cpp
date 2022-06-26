#include <iostream>
#include <limits.h>
using namespace std;

int min_cost(int cost[] ,  int n)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1; i <= n ; i++)
    {
        int min_cost=INT_MAX;
        for(int j=0; j <= i; j++)
        {
            if(j < n && cost[j]!=-1)
            {
                min_cost=min(min_cost, cost[j]+dp[i-j-1]);
            }
            dp[i]=min_cost;
        }
    }
    return dp[n];
}
int main()
{
    
   int cost[] = {20, 10, 4, 50, 100};
    int n=sizeof(cost)/sizeof(cost[0]);
    cout<<min_cost(cost , n);
    
    return 0;
}
