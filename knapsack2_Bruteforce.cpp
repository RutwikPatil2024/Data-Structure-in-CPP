#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define ll long long int
ll f(vector<ll> &weights, vector<ll> &value, int idx, int tgt)
{
    if (tgt == 0)
        return 0;
    if (idx == weights.size())
    {
        return LLONG_MAX;
    }

    ll ans = LLONG_MAX;
    // pick
    ans = min(ans, f(weights, value, idx + 1, tgt));

    // not pick
    if (value[idx] <= tgt)
    {
        ans = min(ans, weights[idx] + f(weights, value, idx + 1, tgt - value[idx]));
    }
    return ans;
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
    int ans = -1;
    for (int i = 0; i < n * 1000; i++)
    {
        if (f(weights, values, 0, i) <= w)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}