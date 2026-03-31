#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>> dp;
int f(string &str1,string &str2,int i,int j){
    if(i>=str1.size())
        return 0;
    if(j>=str2.size())
        return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(str1[i]==str2[j]){
        return dp[i][j]=1 + f(str1, str2, i + 1, j + 1);
    }
    else {
        return dp[i][j]=max(f(str1, str2, i + 1, j), f(str1, str2, i, j + 1));
    }
}
int main()
{
    string str1 = "abc";
    string str2 = "abc";
    dp.clear();
    dp.resize(1002,vector<int>(1002,-1));
    cout << f(str1,str2,0,0);
    return 0;
}