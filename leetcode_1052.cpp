#include<iostream>
using namespace std;
int main()
{
    int customer[]={1,0,1,2,1,1,7,5};
    int grumpy[]={0,1,0,1,0,1,0,1};
    int n=sizeof(customer)/sizeof(customer[0]);
    int prevloss=0;
    int maxloss=0;
    int idx=-1;
    int k=3;
    for(int i=0;i<k;i++)
    {
        if(grumpy[i]==1)
        {
            prevloss+=customer[i];
        }
    }
    maxloss=prevloss;
    int i=1;
    int j=k;
    while (j<n)
    {
        int currloss=0;
        if(grumpy[j]==1)
        {
            currloss+=customer[j];
        }
        if(grumpy[i-1]==1)
        {
            currloss-=customer[i-1];
        }
        if(maxloss<=currloss)
        {
            maxloss=currloss;
            idx=i;
        }
        i++;
        j++;
    }
    //filling zeros
    for(int i=idx;i<idx+k;i++)
    {
        grumpy[i]=0;
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=customer[i];
    }
    cout<<total<<endl;
    cout<<"index is : "<<idx;
    return 0;
}