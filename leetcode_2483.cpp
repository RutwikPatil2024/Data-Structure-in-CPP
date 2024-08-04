#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the log: ";
    cin>>s;
    int n=s.length();
    vector<int>pre(n+1);
    vector<int>suf(n+1);
    pre[0]=0;
    for(int i=0;i<n;i++)
    {
        pre[i+1]=pre[i]+((s[i]=='N') ? 1 : 0);
    }
    suf[n]=0;
    for(int i=n-1;i>=0;i--)
    {
        suf[i]=suf[i+1]+((s[i]=='Y') ? 1 : 0);
    }
    vector<int>ans(n+1);
    int minpel=n;
    for(int i=0;i<n+1;i++)
    {
        ans[i]=pre[i]+suf[i];
        minpel=min(minpel,ans[i]);
    }
    cout<<minpel<<endl;
    for(int i=0;i<n+1;i++)
    {
        if(ans[i]==minpel)
        {
            cout<<"shop should closed at "<<i<<endl;
            break;
        }
    }

    return 0;
}