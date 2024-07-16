#include <iostream>
#include <string>
using namespace std;
void permutation(string original,string ans)
{
    if(original.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++)
    {
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(left+right,ans+ch);
    }
}
int main()
{
    string s;
    cout<<"Enter the string s : ";
    cin>>s;
    permutation(s,"");
    return 0;
}