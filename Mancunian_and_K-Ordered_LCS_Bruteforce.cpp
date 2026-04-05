//Mancunian_and_K-Ordered_LCS._Bruteforcecpp
#include<iostream>
#include<algorithm>
using namespace std;
int f(int *a,int *b,int n,int m,int i,int j,int k)
{
    if(n==i or n==j){
        return 0;
    }
    
    if(a[i]==b[j]){
        return 1 + f(a,b,n,m,i+1,j+1,k);
    }
    else{
        if(k>0){
            return max({1 + f(a, b, n, m, i + 1, j + 1, k - 1), f(a, b, n, m, i + 1, j, k), f(a, b, n, m, i, j + 1, k)});
        }
        else{
            return max({f(a, b, n, m, i + 1, j, k), f(a, b, n, m, i, j + 1, k)});
        }
    }
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int brr[m];
    for (int i = 0; i < m;i++)
    {
        cin >> brr[i];
    }
    cout<<f(arr, brr, n, m, 0, 0, k);
    return 0;
}
// 5 5 1
// 1 2 3 4 5
// 5 3 1 4 2