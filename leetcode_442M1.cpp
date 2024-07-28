#include<iostream>
#include<vector>
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
    vector<int>check(n+1,0);
    for(int i=0;i<n;i++)
    {
        int ele=arr[i];
        int x=check[ele];
        x=x+1;
        check[ele]=x;
    }
    for(int i=0;i<check.size();i++)
    {
        if(check[i]>1)
        {
            cout<<"Duplicate element is "<<i<<endl;
        }
        
    }
    return 0;
}

