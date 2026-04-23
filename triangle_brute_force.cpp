#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int f(vector<vector<int>>triangle,int r,int c){
//     if (r == triangle.size()) {
//         return 0;
//     }

//     int down = f(triangle, r + 1, c);

//     int diag = f(triangle, r + 1, c + 1);

//      return triangle[r][c] + min(down, diag);
// }

int f(vector<vector<int>> triangle, int r, int c)
{
    if (r == triangle.size())
    {
        return 0;
    }
    return triangle[r][c] + min(f(triangle, r + 1, c), f(triangle, r + 1, c + 1));
}
int main()
{
    // vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    vector<vector<int>> triangle = {{-10}};
    cout << f(triangle, 0, 0);
    return 0;
}