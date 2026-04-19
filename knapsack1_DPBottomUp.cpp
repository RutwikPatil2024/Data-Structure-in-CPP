#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define ll long long int
vector<vector<ll>> dp;
ll f(vector<ll> &weights, vector<ll> &value, int idx, int w)
{
    int n = weights.size();
    dp.resize(105, vector<ll>(100005, 0));
    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int j = 0; j <= w; j++)
        {
            ll ans = INT_MIN;
            // not pick
            ans = max(ans, dp[idx+1][j]);

            // pick
            if (weights[idx] <= j)
            {
                ans = max(ans, value[idx] + dp[idx+1][j-weights[idx]]);
            }
            dp[idx][j] = ans;
        }
    }
    return dp[0][w];
}
int main()
{
    int n, w;
    cin >> n >> w;
    vector<ll> weights;
    vector<ll> values;
    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;
        weights.push_back(w);
        values.push_back(v);
    }
    cout << f(weights, values, 0, w);
    return 0;
}