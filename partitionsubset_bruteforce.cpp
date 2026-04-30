#include<iostream>
#include<vector>
using namespace std;
bool f(vector<int> &nums,int i,int k){
    if(k==0)
        return true;
    
    if(i==nums.size()){
        return false;
    }
    
    if(nums[i]<=k){
        return f(nums,i+1, k-nums[i]) or f(nums,i+1, k);
    }
    else{
        return f(nums, i + 1, k);
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
    cout << f(nums, 0, s/2);
    return 0;
}