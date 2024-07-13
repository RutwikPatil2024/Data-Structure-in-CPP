#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>ans;
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(0);
    ans.push_back(4);
    ans.push_back(2);
    int size=ans.size();
    int value=2;
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(ans[i]!=value)
        {
            ans[j]=ans[i];
            j++;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<" "<<ans[i];
    }
    cout<<"\n";
    cout<<"Value of j = "<<j;
    return 0;
}