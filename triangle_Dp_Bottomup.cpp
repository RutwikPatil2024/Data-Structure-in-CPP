#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> dp;
int f(vector<vector<int>> triangle)
{
    dp.clear();
    dp.resize(205, vector<int>(205, INT_MAX));
    int n = triangle.size();
    //base case
    for (int i = 0; i < triangle[n - 1].size();i++)
    {
        dp[n - 1][i] = triangle[n - 1][i];
    }

    for (int r = n - 2; r >= 0;r--)
    {
        for (int c = 0; c < triangle[r].size();c++){
            dp[r][c]=triangle[r][c] + min(dp[r + 1][c],dp[r + 1][c+1]);
        }
    }
    return dp[0][0];
}
int main()
{
    vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    // vector<vector<int>> triangle = {{-10}};
    cout << f(triangle);
    return 0;
}