#include<iostream>
#include<vector>
using namespace std;
int c=0;
void merge(vector<int>&a,vector<int>&b,vector<int>&res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
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
int inversion(vector<int>&a,vector<int>&b)
{
    int count=0;
    int i=0;
    int j=0;
    while (i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
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
    if(n==1) return ;
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

    c+=inversion(a,b);

    merge(a,b,v);
}
int main()
{
    int arr[]={11,2,3,4,5,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n1);
    mergesort(a);
    cout<<"Count is  : "<<c;
    return 0;
}