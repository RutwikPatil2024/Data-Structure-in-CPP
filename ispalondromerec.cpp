#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s,int i,int j)
{
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else ispalindrome(s,i++,j--);
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int size=s.length()-1;
    cout<<ispalindrome(s,0,size);

    return 0;
}