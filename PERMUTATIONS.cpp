#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve1(vector<int>&nums , vector<vector<int>>&ans , int idx)
{
    if(idx==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=idx; i < nums.size();i++)
    {
        swap(nums[i] , nums[idx]);
        solve1(nums,ans,idx+1);
        swap(nums[i],nums[idx]);
    }
}
vector<vector<int>>permute(vector<int>nums)
{
    vector<vector<int>>ans;
    solve1(nums,ans,0);
    return ans;
}
using namespace std;

int main()
{
    vector<vector<int>> res=permute({1,2,3});
    for(auto i:res)
    {
        for(auto ii:i)
        {
            cout<<ii<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
