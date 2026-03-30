#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> cost;
vector<vector<int>> dp;
int n;
int f(int day, int act) {
    
    if (day == n)
        return 0;

    int ans = 0;
    if(act!=-1 and  dp[day][act]!=-1)
        return dp[day][act];
    for (int i = 0; i < 3; i++) {
        if (i != act) {
            int curr = cost[day][i] + f(day + 1, i);
            ans = max(ans, curr);
        }
    }
    if(act!=-1){
        dp[day][act]=ans;
    }
    return ans;
}

int main() {
    cin >> n;

    cost.resize(n, vector<int>(3));
    dp.resize(n, vector<int>(3,-1));

    for (int i = 0; i < n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    cout << f(0, -1);
    return 0;
}