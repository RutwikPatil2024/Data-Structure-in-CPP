#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //selection sort
    for(int i=0;i<n;i++)
    {
        //finding min element and index
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                idx=j;
            }  
        }
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}