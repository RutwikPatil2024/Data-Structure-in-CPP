#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,0,1,1,0,0,1,1,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxlen=INT_MIN;
    int len=INT_MIN;
    int flips=0;
    int k=2;
    int i=0;
    int j=0;
    while (j<n)
    {
        if(arr[j]==1) j++;
        else
        {
            if(flips<k)
            {
                flips++;
                j++;
            }
            else
            {
                len=j-i;
                maxlen=max(maxlen,len);
                while (arr[i]==1)
                {
                    i++;
                }
                i++;
                j++;
            }
        }
    }
    len=j-i;
    maxlen=max(maxlen,len);
    cout<<"maxlen : "<<maxlen;    
    
    return 0;
}