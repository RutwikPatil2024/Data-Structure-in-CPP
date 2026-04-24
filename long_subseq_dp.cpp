#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> dp;
int f(vector<int>& nums, int i){
    int ans = 0;
    if(dp[i]!=INT_MIN){
        return dp[i];
    }
    for(int j = 0; j < i; j++){
        if(nums[j] < nums[i]){
            ans = max(ans, f(nums, j));
        }
    }

    return dp[i]=1 + ans;
}

int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};
    dp.resize(nums.size() + 2, INT_MIN);
    int result = 0;

    for(int i = 0; i < nums.size(); i++){
        result = max(result, f(nums, i));
    }

    cout << result;

    return 0;
}