#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,4,5,3,3,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>run(n);
    run[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        run[i]=arr[i]+run[i-1];
    }
    for(int i=0;i<run.size();i++)
    {
        cout<<run[i]<<" ";
    }
    return 0;
}