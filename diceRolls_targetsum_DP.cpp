#include<iostream>
#include<vector>
using namespace std;
int n,k,t;
vector<vector<int>> dp;
int f(int n,int t){
    if(n==0 && t==0) return 1;
    if(n==0 || t<0) return 0;
    if(dp[n][t] != -1) return dp[n][t];
    int sum = 0;
    for(int v = 1; v <= k; v++){
        sum += f(n-1, t-v);
    }
    return dp[n][t] = sum;
}

int main(){
    cin >> n >> k >> t;
    dp.resize(n+1, vector<int>(t+1, -1)); 
    cout << f(n, t);
    return 0;
}