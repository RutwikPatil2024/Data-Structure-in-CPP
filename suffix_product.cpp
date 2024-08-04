#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans(n);
    int p=arr[n-1];
    ans[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        ans[i]=p;
        p*=arr[i];
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}