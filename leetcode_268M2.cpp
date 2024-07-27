#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while (i<n)
    {
        int correctidx=arr[i];
        if(correctidx==i || arr[i]==n) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            cout<<i<<" is missing "<<endl;
            break;
        }
    }
    return 0;
}