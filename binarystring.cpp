#include<iostream>
using namespace std;
void genstr(string s,int n)
{
    if(s.length()==n)
    {
        cout<<s<<endl;
        return;
    }
    genstr(s+'0',n);
    if(s.length()==0)
    {
        genstr(s+'1',n);
    }
    else if(s[s.length()-1]=='0')
    {
        genstr(s+'1',n);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    genstr("",n);

}