#include <iostream>
#include <string>
#include <vector>
using namespace std;
int INF = 1e9;
vector<vector<int>> dp;
int f(string str1, string str2, int i, int j)
{
    if (i == str1.length())
        return INF;
    if (j == str2.length())
        return 1;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int k = -1;
    for (int x = j; x < str2.length(); x++)
    {
        if (str1[i] == str2[x])
        {
            k = x;
            break;
        }
    }
    if (k == -1)
        return 1;
    return dp[i][j]=min(f(str1, str2, i + 1, j), 1 + f(str1, str2, i + 1, k + 1));
}
int main()
{
    string str1 = "ab";
    string str2 = "b";
    dp.resize(502,vector<int>(502,-1));
    cout << f(str1, str2, 0, 0);
    return 0;
}