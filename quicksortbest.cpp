#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++)
    {
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotele)
        {
            count++;
        }
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while (i<pivotidx && j>pivotidx)
    {
        if(arr[i]<pivotele) i++;
        if(arr[j]>pivotele) j--;
        if(arr[i]>pivotele && arr[j]<pivotele)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
    
}
void mergesort(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int pivotidx=partition(arr,si,ei);

    mergesort(arr,si,pivotidx-1);
    mergesort(arr,pivotidx+1,ei);
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}