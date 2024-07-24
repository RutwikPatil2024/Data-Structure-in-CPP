#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++)
    {
        if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivotele)
        {
            count++;
        }
    }
    int pivotidx=count+si;
    swap(arr[pivotidx],arr[(si+ei)/2]);
    int i=si;
    int j=ei;
    while (i<pivotidx && j>pivotidx)
    {
        if(arr[i]<pivotele) i++;
        if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<pivotele)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void merge(int arr[],int si,int ei,int k)
{
    int pivotidx=partition(arr,si,ei);
    if(pivotidx+1==k) cout<<k<<"th smallest element is "<<arr[pivotidx]<<endl;
    else if(pivotidx+1<k) merge(arr,pivotidx+1,ei,k);
    else merge(arr,si,pivotidx-1,k);
}
int main()
{
    int n;
    int k;
    cout<<"Enter the size of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter which element you want : ";
    cin>>k;
    merge(arr,0,n-1,k);
    return 0;
}