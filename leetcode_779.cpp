#include<iostream>
using namespace std;
int kthsymbolingrammer(int n,int k)
{
    if(n==1) return 0;
    if(k%2==0)
    {
        int prevans=kthsymbolingrammer(n-1,k/2);
        //fliping
        if(prevans==0) return 1;
        else return 0;
    }
    else
    {
        int prevans=kthsymbolingrammer(n-1,k/2+1);
        return prevans;
    }
}
int main()
{
    int n,k;
    cout<<"n and k : ";
    cin>>n>>k;
    cout<<kthsymbolingrammer(n,k);
    return 0;
}