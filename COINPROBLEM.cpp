
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void find_min_coins(int V)
{
   int denomination[]={1,2,5,10,20,50,100,500,1000};
   int n=sizeof(denomination)/sizeof(denomination[0]);
   sort(denomination, denomination+n);
   vector<int> result;
   for(int i=n-1; i >= 0; i--)
   {
       while(V >= denomination[i])
       {
           V=V-denomination[i];
           result.push_back(denomination[i]);
       }
   }
   for(int i=0; i <  result.size() ; i++)
   {
       cout<<result[i]<<endl;
   }
  
}
int main()
{
    int n=1042;
    find_min_coins(n);

    return 0;
}
