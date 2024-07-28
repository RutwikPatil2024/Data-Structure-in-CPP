#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while (i<n)
    {
        int correctidx=arr[i]-1;
        if(arr[i]==i+1 || arr[i]==arr[correctidx]) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<"Duplicate element is "<<arr[i]<<endl;
            cout<<"Missing element is "<<i+1<<endl;
        }
    }
    return 0;
}

// [8,7,3,5,3,6,1,4]