#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while (i<n)
    {
        int correctidx=arr[i];
        if(arr[i]==arr[correctidx])
        {
            cout<<"Duplicate element is : "<<arr[i]<<endl;
            break;
        }
        else swap(arr[i],arr[correctidx]);
    }
    
    return 0;
}