#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> cost;
vector<int> dp(100000, -1);
int count = 0;
int f( int x) {
    if(x==0)
        return 0;
    int result=INT_MAX;
    if(dp[x]!=-1)
        return dp[x];
    for (int i = 0;i<cost.size();i++)
    {
        if(x-cost[i]<0) continue;
        count++;
        result = min(result, f(x - cost[i]));
    }
    return dp[x]=1 + result;
}

int main() {
    int n, x;
    cin >> n >> x;
    cost.clear();
    cost.resize(n);
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        cost[i] = y;
    }
    cout<<f(x);
    cout << "Count is : " << count << endl;
    return 0;
}
// 3 11
// 1 5 7
// 3
// Count is : 23