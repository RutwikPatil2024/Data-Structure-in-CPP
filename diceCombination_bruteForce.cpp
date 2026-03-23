#include<iostream>
#include<vector>
using namespace std;
vector<int> coin={1,2,3,4,5,6};
int f(int x){
    if(x==0)
        return 1;
    if(x<0)
        return 0;
    
    int count = 0;
    for (int i = 0; i < coin.size();i++)
    {
        if(coin[i]>x) continue;
        count+=f(x - coin[i]);
    }
    return count%(1000000007);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}