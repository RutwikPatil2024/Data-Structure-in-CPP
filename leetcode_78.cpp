#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sum(int arr[],int n,int target,vector<int>temp,int idx)
{
    if(target==0)
    {
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx;i<n;i++)
    {
        if(i>idx and arr[i]==arr[i-1]) continue;
        if(target>=arr[i])
        {
            temp.push_back(arr[i]);
            sum(arr,n,target-arr[i],temp,idx+1);
            temp.pop_back();
        }
    }
}
int main()
{
    int arr[]={1,2,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    vector<int>temp;
    sum(arr,n,5,temp,0);

    return 0;
}