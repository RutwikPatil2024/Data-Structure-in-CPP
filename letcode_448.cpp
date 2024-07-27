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
        int correctidx=arr[i]-1;
        if(arr[correctidx]==arr[i]) i++;
        else
        {
            swap(arr[i],arr[correctidx]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1<<" is disapperead"<<endl;
        }
    }
    return 0;
}