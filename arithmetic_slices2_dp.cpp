#include<iostream>
#include<vector>
#include<unordered_map>
#define ll long long int
using namespace std;
int f(vector<int>& nums){
    int n = nums.size();
    vector<unordered_map<ll, ll>> dp(n);
    ll ans = 0;
    for (ll i = 0; i < n;i++)
    {
        for (ll j = 0; j < i;j++){
            ll diff = (ll)nums[i] - (ll)nums[j];
            if(dp[j].find(diff)!=dp[j].end()){
                ans += dp[j][diff];
            }
            dp[i][diff] += dp[j][diff] + 1;
        }
    }
    return (ll)ans;
}
int main()
{
    vector<int> nums = {7,7,7,7,7};
    cout << f(nums);
    return 0;
}