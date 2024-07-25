#include<iostream>
#include<vector>
using namespace std;
int c=0;
void mergesorted(vector<int>&a,vector<int>&b,vector<int>&res)
{
    int i=0;
    int j=0;
    int k=0;
    while (i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            res[k]=a[i];
            k++;
            i++;
        }
        else
        {
            res[k]=b[j];
            k++;
            j++;
        }
    }
    if(i==a.size())
    {
        while (j<b.size())
        {
            res[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==b.size())
    {
        while (i<a.size())
        {
            res[k]=a[i];
            k++;
            i++;
        }
    }
    
}
int countreversepair(vector<int>&a,vector<int>&b)
{
    int count=0;
    int i=0;
    int j=0;
    while (i<a.size() && j<b.size())
    {
        // LL is short form for long long to typecast
        if(a[i]>(b[j]*2LL))
        {
            count+=(a.size()-i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
    
}
void mergesort(vector<int>&v)
{
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    
    c+=countreversepair(a,b);

    mergesorted(a,b,v);

}
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
    vector<int>v(arr,arr+n);
    mergesort(v);
    cout<<"Count is : "<<c<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}