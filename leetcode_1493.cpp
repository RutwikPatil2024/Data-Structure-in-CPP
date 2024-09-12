#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[]={0,1,1,1,0,1,1,0,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k=1;
    int flips=0;
    int maxlen=INT_MIN;
    int len=INT_MIN;
    int i=0;
    int j=0;
    while (j<n)
    {
        if(nums[j]==1) j++;
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
                while (nums[i]==1)
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
    cout<<"Maxlen is : "<<maxlen-1<<endl;
    return 0;
}