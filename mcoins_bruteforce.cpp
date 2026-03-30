#include<iostream>
#include<vector>
using namespace std;
int count = 0;
int f(int n,int k,int l){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==k)
        return 1;
    if(n==l)
        return 1;
    count += 1;
    return !((f(n-1,k,l)and ((n-k>=0) ? f(n-k,k,l) : 1) and ((n-l>=0) ? f(n-l,k,l) : 1)));
}
int main()
{
    int n, k, l;
    cin >> n >> l >> k;
    cout << f(n, k, l);
    cout << "\nCount is : " << count << endl;
    return 0;
}
// 8 2 3
// 0
// Count is : 13