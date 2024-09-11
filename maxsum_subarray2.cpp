#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=-1;
    int maxidx=-1;
    int k=3;
    int prevsum=0;
    for(int i=0;i<k;i++)
    {
        prevsum+=arr[i];
    }
    int i=1;
    int j=k;
    while (j<n)
    {
        int currsum=prevsum+arr[j]-arr[i-1];
        if(maxsum<currsum)
        {
            maxsum=currsum;
            maxidx=i;
        }
        prevsum=maxsum;
        i++;
        j++;
    }
    
    cout<<"Maxsum is : "<<maxsum<<endl;
    cout<<"max idx is : "<<maxidx;
    return 0;
}