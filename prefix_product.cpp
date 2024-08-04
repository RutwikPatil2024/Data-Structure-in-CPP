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
    int p=arr[0];
    ans[0]=1;
    for(int i=1;i<n;i++)
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