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
    int actualsum=n*(n+1)/2;
    // cout<<actualsum;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Actual sum is : "<<actualsum<<endl;
    cout<<"Sum of arr : "<<sum<<endl;
    cout<<"Missing element is : "<<actualsum-sum;
    return 0;
}