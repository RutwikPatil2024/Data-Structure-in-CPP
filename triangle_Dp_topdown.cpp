#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> dp(205, vector<int>(205, INT_MAX));
int f(vector<vector<int>> triangle, int r, int c)
{
    if (r == triangle.size()-1)
    {
        return triangle[r][c];
    }
    if(dp[r][c]!=INT_MAX){
        return dp[r][c];
    }
    return dp[r][c]=triangle[r][c] + min(f(triangle, r + 1, c), f(triangle, r + 1, c + 1));
}
int main()
{
    // vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    vector<vector<int>> triangle = {{-10}};
    cout << f(triangle, 0, 0);
    return 0;
}