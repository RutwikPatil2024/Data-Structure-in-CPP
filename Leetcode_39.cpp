#include<iostream>
#include<vector>
using namespace std;
void combinationsum(vector<int>v,int arr[],int n,int target,int idx)
{
    if(target==0)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++)
    {
        v.push_back(arr[i]);
        combinationsum(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main()
{
    vector<int>v;
    int target;
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the target : ";
    cin>>target;
    combinationsum(v,arr,n,target,0);
    return 0;
}   