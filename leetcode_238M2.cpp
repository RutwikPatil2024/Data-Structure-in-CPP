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
    vector<int>pre(n);
    int p1=arr[0];
    pre[0]=1;
    for(int i=1;i<n;i++)
    {
        pre[i]=p1;
        p1*=arr[i];
    }
    vector<int>suf(n);
    int p2=arr[n-1];
    suf[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suf[i]=p2;
        p2*=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        pre[i]=pre[i]*suf[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}