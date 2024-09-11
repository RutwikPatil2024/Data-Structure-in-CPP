#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=-1;
    int maxidx=-1;
    int k=3;
    for(int i=0;i<=n-k;i++)
    {
        int sum=0;
        for(int j=i;j<k+i;j++)
        {
            sum+=arr[i];
        }
        if(maxsum<sum)
        {
            maxsum=sum;
            maxidx=i;
        }
    }
    cout<<"Maxsum is : "<<maxsum<<endl;
    cout<<"max idx is : "<<maxidx;
    return 0;
}