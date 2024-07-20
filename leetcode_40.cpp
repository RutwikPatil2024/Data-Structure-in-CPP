#include<iostream>
#include<vector>
using namespace std;
void combination_sum(int arr[],int n,vector<int>ans,int idx,int target)
{
    if(target==0)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int i=idx;i<n;i++)
    {
        if(i!=idx and  arr[i]==arr[i-1]) continue;
        if(arr[i]<=target)
        {
            //pick
            ans.push_back(arr[i]);
            combination_sum(arr,n,ans,idx+1,target-arr[i]);
            ans.pop_back();
        }
    }
}
int main()
{
    int arr[]={1,1,2,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    int target=3;
    combination_sum(arr,n,ans,0,target);
    return 0;
}