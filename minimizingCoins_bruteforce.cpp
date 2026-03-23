#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int f(vector<int>& cost, int x) {
    // base cases
    if (x == 0) return 0;     
    if (x < 0) return INT_MAX; // invalid case

    int mn = INT_MAX;

    for (int i = 0; i < cost.size(); i++) {
        int ans = f(cost, x - cost[i]);

        if (ans != INT_MAX) {
            mn = min(mn, 1 + ans);
        }
    }

    return mn;
}

int main() {
    vector<int> cost;
    int n, x;
    cin >> n >> x;
    cost.clear();
    cost.resize(n);
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        cost[i] = y;
    }
    int result = f(cost, x);

    if (result == INT_MAX)
        result = -1;
    cout << result;
    return 0;
}