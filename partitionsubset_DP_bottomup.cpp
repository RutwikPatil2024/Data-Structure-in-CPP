#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> dp;
bool f(vector<int> &nums, int i, int k)
{
    if (k == 0)
        return true;

    if (i == nums.size())
    {
        return false;
    }
    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }
    if (nums[i] <= k)
    {
        return dp[i][k] = f(nums, i + 1, k - nums[i]) or f(nums, i + 1, k);
    }
    else
    {
        return dp[i][k] = f(nums, i + 1, k);
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 5};
    int s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        s += nums[i];
    }
    dp.clear();
    dp.resize(205, vector<int>(20005, false));
    int n = nums.size();
    int k = s / 2;
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            if (nums[i] <= k)
            {
                dp[i][j] = dp[i + 1][k - nums[i]] or dp[i + 1][k];
            }
            else
            {
                dp[i][j] = dp[i + 1][k];
            }
        }
    }
    cout << dp[0][k];
    return 0;
}