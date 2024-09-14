#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,13,17,23,29,31,7,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int threshold=5;
    int sum=0;
    float avg=0;
    int count=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    avg=sum/k;
    if(threshold<=avg) count++;
    int i=1;
    int j=k;
    while (j<n)
    {
        int currsum=sum+arr[j]-arr[i-1];
        avg=sum/k;
        if(threshold<=avg)
        {
            cout<<"index is : "<<i<<endl;
            count++;
        }
        sum=currsum;
        i++;
        j++;
    }
    cout<<"count is : "<<count;
    return 0;
}