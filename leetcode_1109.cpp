#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> bookings = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    int n = 5;
    vector<int> seat(n, 0);
    int row = bookings.size();
    for (int i = 0; i < row; i++)
    {
        int start=bookings[i][0];
        int end=bookings[i][1];
        int val=bookings[i][2];
        for (int j = start; j <= end; j++)
        {
            seat[j-1]+=val;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout<<seat[j]<<" ";
    }
    return 0;
}