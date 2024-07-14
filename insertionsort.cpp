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
    //insertion sort
    for(int i=1;i<n;i++)
    {
        int j=i;
        while (j>=1)
        {
            if(arr[j]>arr[j-1]) break;
            else{
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}