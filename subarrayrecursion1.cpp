#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>v,int arr[],int idx,int n)
{
    if(idx==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    subarray(v,arr,idx+1,n);
    if(v.size()==0)
    {
        v.push_back(arr[idx]);
        subarray(v,arr,idx+1,n);
    }
    else if(arr[idx-1]==v[v.size()-1])
    {
        v.push_back(arr[idx]);
        subarray(v,arr,idx+1,n);
    }
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : "; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subarray(v,arr,0,n);
    return 0;
}