#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Arr : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>preprod(n);
    preprod[0]=1;
    for(int i=1;i<n;i++)
    {
        preprod[i]=arr[i-1]*preprod[i-1];
    }
    cout<<"Preprod : ";
    for(int i=0;i<preprod.size();i++)
    {
        cout<<preprod[i]<<" ";
    }
    vector<int>sufprod(n);
    cout<<endl;
    sufprod[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        sufprod[i]=arr[i+1]*sufprod[i+1];
    }
    cout<<"Sufprod : ";
    for(int i=0;i<sufprod.size();i++)
    {
        cout<<sufprod[i]<<" ";
    }
    cout<<endl;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i]=preprod[i]*sufprod[i];
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}