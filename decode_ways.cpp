#include <iostream>
#include <string>
#include<vector>
using namespace std;
#define ll long long int
int f(string str, int i)
{
    if (i < 0)
        return 1;
    if (i == 0)
        return str[0] == '0' ? 0 : 1;
    ll ans = 0;
    if (str[i] != '0')
    {
        ans += f(str, i - 1);
    }
    ll num = (str[i - 1] - '0') * 10 + (str[i] - '0');
    if (num >= 10 && num <= 26)
    {
        ans += f(str, i - 2);
    }
    return ans;
}
int main()
{
    string str = "226";
    cout << f(str, str.length() - 1);
    return 0;
}