#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(a!=arr[j])
            {
                ans.push_back(arr[j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}