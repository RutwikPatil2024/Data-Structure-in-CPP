#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={-2,0,3,-5,2,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int presum[n];
    presum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        presum[i]=presum[i-1]+arr[i];
    }
    int a,b;
    int sum=0;
    cout<<"Enter the a and b : ";
    cin>>a>>b;
    if(a==0) cout<<"sum is "<<presum[b];
    else{
        sum=presum[b]-presum[a-1];
        cout<<"sum is "<<sum<<endl;
    }

    return 0;
}