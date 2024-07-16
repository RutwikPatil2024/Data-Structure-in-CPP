#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubstring(vector<string>&ans,string original,string s,bool flag)
{
    if(original.length()==0)
    {
        ans.push_back(s);
        return ;
    }
    char ch=original[0];
    if(original.length()==1)
    {
        if(flag==true)
        {
            printsubstring(ans,original.substr(1),s+ch,true);
        }
        printsubstring(ans,original.substr(1),s,true);
        return;
    }
    char dh=original[1];
    if(ch==dh)
    {
        if(flag==true)
        {
            printsubstring(ans,original.substr(1),s+ch,true);
        }
        printsubstring(ans,original.substr(1),s,false);
    }
    else
    {
        if(flag==true)
        {
            printsubstring(ans,original.substr(1),s+ch,true);
        }
        printsubstring(ans,original.substr(1),s,true);
    }
    
}
int main()
{
    string s;
    vector<string>ans;
    cout<<"Enter the string : ";
    cin>>s;
    printsubstring(ans,"",s,true);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}