#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            if(arr[j]<0)
            {
                ans.push_back(arr[j]);
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}