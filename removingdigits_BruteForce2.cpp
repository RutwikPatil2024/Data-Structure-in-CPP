#include<iostream>
#include<vector>
#include <climits>
using namespace std;
vector<int> digits;
void findDigit(int n){
    digits.clear();
    while(n > 0){
        int d = n % 10;
        if(d!=0) digits.push_back(d);
        n /= 10;
    }
}
int f(int n)
{
    if(n==0)
        return 0;
    if(n<=9)
        return 1;
    findDigit(n);
    int res = INT_MAX;
    for (int i = 0; i < digits.size();i++)
    {
        res = 1 + min(res, f(n-digits[i]));
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout << f(n);
    return 0;
}