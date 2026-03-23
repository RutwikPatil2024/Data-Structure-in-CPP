#include<iostream>
#include<vector>
using namespace std;
int f(int n,int k,int t){
    if(n==0 and t==0)
        return 1;
    if(n==0 )
        return 0;
    int sum = 0;
    for (int v = 1; v <= k;v++)
    {
        if((t-v)<0) continue;
        sum += f(n - 1, k, t - v);
    }
    return sum;
}
int main()
{
    int n,k,target;
    cin >> n >> k >> target;
    cout << f(n, k, target);
    return 0;
}