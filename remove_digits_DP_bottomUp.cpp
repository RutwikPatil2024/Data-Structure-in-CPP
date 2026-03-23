#include<iostream>
#include<vector>
#include <climits>
using namespace std;
vector<int> digits;
vector<int> dp(10000005,-1);
void findDigit(int n){
    digits.clear();
    while(n > 0){
        int d = n % 10;
        if(d!=0) digits.push_back(d);
        n /= 10;
    }
}
int f(int n)
{
    dp[0] = 0;
    for (int i = 1; i <= 9;i++)
    {
        dp[i] = 1;
    }
    for (int i = 10; i <= n;i++)
    {
        findDigit(i);
        int res = INT_MAX;
        for (int j = 0; j < digits.size();i++)
        {
            res = min(res, dp[n - dp[i]]);
        }
        dp[i] = res + 1;
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout << f(n);
    return 0;
}