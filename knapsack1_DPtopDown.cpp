#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
#define ll long long int
vector<vector<ll>> dp(105,vector<ll>(100005,-1));
ll f(vector<ll>&weights,vector<ll>&value,int idx,int w){
    if(idx==weights.size()){
        return 0;
    }
    if(w==0){
        return 0;
    }
    
    ll ans = INT_MIN;
    if(dp[idx][w]!=-1)
        return dp[idx][w];
    //not pick
    ans=max(ans,f(weights, value, idx+1, w));
    // pick
    if(weights[idx]<=w){
        ans=max(ans,value[idx]+f( weights, value,idx+1, w-weights[idx]));
    }
    return dp[idx][w]=ans;
}
int main()
{
    int n,w;
    cin >> n >> w;
    vector<ll> weights;
    vector<ll> values;
    for (int i = 0; i < n;i++)
    {
        int w,v;
        cin>>w>>v;
        weights.push_back(w);
        values.push_back(v);
    }
    cout << f(weights, values, 0,  w);
    return 0;
}