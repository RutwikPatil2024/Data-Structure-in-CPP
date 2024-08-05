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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            idx=i-1;
            break;
        }
    }
    cout<<endl;
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
// -2 5 -1 0 3 -3