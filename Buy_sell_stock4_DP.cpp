#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[1004][2][103];
int f(vector<int>prices,int i,bool on,int k)
{
    if(i==prices.size() or k==0){
        return 0;
    }
    if(dp[i][on][k]!=-1){
        return dp[i][on][k];
    }
    if(on){ //you have stock so you can sell or skip
        return dp[i][on][k]=max(f(prices,i+1,on,k),prices[i]+f(prices,i+1,false,k-1));
    }
    else{//you dont have stock so you can buy or skip
        return dp[i][on][k]=max(f(prices,i+1,on,k),-prices[i]+f(prices,i+1,true,k));
    }
}
int main()
{
    vector<int> prices = {2,4,1};
    memset(dp, -1, sizeof dp);
    cout << f(prices, 0, false, 2);
    return 0;
}