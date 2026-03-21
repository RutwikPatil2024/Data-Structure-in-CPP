#include<iostream>
#include<climits>
using namespace std;
int f(int n)
{
    if(n<10)
        return 1;
    int x = n;
    int mx = INT_MIN;
    while(x>0)
    {
        int y = x % 10;
        mx = max(mx, y);
        x /= 10;
    }
    n -= mx;
    return 1 + f(n);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}