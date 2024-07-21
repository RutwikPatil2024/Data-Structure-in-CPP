#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={11,2,3,4,5,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n1);
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    cout<<"Count is  : "<<count;
    return 0;
}