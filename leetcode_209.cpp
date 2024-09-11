#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,3,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=10;
    int minlen=INT_MAX;
    int i=0;
    int j=0;
    int sum=0;
    while (j<n)
    {
        sum+=arr[j];
        while (sum>=target)
        {
            int len=j-i+1;
            minlen=min(minlen,len);
            sum-=arr[i];
            i++;
        }
        j++;
    }
    cout<<"minlen is : "<<minlen;
    return 0;
}