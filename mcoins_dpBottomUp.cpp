#include<iostream>
#include<vector>
using namespace std;
int f(int n,int k,int l){
    vector<int> coins(n + 1, 0);
    coins[1] = 1;
    coins[k] = 1;
    coins[l] = 1;
    for (int i = 0; i < coins.size();i++)
    {
        if (i == 0 || i == 1 || i == k || i == l)
            continue;
        coins[i] = !(coins[i - 1] and ((n - k >= 0) ? coins[i - k] : 1) and ((n - l >= 0) ? coins[i - l] : 1));
    }
    return coins[n];
}
int main()
{
    int n, k, l;
    cin >> n >> l >> k;
    cout << f(n, k, l);
    return 0;
}
