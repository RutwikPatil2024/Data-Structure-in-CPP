#include<iostream>
#include<vector>
#include<algorithm>
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
    //sort the array
    sort(arr,arr+n);
    int suf[n];
    suf[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suf[i]=suf[i+1]+arr[i];
    }
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(suf[i]>=0)
        {
            idx=i;
            break;
        }
    }
    
    cout<<idx;
   cout<<endl;
    int maxsum=0;
    int x=1;
    for(int i=idx;i<n;i++)
    {
        maxsum+=(arr[i]*x);
        x++;
    }
    cout<<maxsum;
    return 0;
}