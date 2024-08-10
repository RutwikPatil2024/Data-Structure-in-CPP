#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,7,3,6,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int leftsum=0;
    int rightsum=sum;
    for(int i=0;i<n;i++)
    {
        rightsum-=arr[i];
        cout<<"index : "<<i<<" Left sum : "<<leftsum<<"  right sum : "<<rightsum<<endl;
        if(leftsum==rightsum)
        {
            cout<<"index is "<<i<<endl;
            break;
        }
        leftsum+=arr[i];
       
    }

    return 0;
}