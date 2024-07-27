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
    vector<bool>check(n+1,false);
    for(int i=0;i<n;i++)
    {
        int ele=arr[i];
        check[ele]=true;
    }
    for(int i=0;i<check.size();i++)
    {
        if(check[i]==false)
        {
            cout<<i<<" number is missing"<<endl;
            break;
        }
    }
    
    
    return 0;
}