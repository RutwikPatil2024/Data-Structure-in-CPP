#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> dp;
bool f(vector<int> &nums,int i,int k){
    if(k==0)
        return true;
    
    if(i==nums.size()){
        return false;
    }
    if(dp[i][k]!=-1){
        return dp[i][k];
    }
    if(nums[i]<=k){
        return dp[i][k]=f(nums,i+1, k-nums[i]) or f(nums,i+1, k);
    }
    else{
        return dp[i][k]=f(nums, i + 1, k);
    }
}
int main()
{
    vector<int> nums = {1,2,3,5};
    int s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        s += nums[i];
    }
    dp.clear();
    dp.resize(205, vector<int>(20005,-1));
    cout << f(nums, 0, s/2);
    return 0;
}