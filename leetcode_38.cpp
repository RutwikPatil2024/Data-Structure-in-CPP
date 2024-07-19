#include<iostream>
#include<string>
using namespace std;
string countandsay(int n)
{
    if(n==1) return "1";
    string str=countandsay(n-1);
    string ztr="";
    int freq=1;
    char ch=str[0];
    for(int i=1;i<(str.length());i++)
    {
        char dh=str[i];
        if(ch==dh)
        {
            freq++;
        }
        else
        {
            ztr+=(to_string(freq)+ch);
            ch=dh;
            freq=1;
        }
    }
    ztr+=(to_string(freq)+ch);
    return ztr;
}
int main()
{
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    cout<<countandsay(n);
    return 0;
}