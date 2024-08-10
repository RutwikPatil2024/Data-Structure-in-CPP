#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int nums[]={2,3,7,5,10};
    int n=sizeof(nums)/sizeof(nums[0]);
    int maxarr[n];
    int max=nums[0];
    for(int i=0;i<n;i++)
    {
        
        if(max<nums[i])
        {
            max=nums[i];
        }
        maxarr[i]=max;
    }
    int conver[n];
    for(int i=0;i<n;i++)
    {
        conver[i]=nums[i]+maxarr[i];
    }
    int ans[n];
    ans[0]=conver[0];
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]+conver[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}