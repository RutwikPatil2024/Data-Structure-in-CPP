#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0) return b;
    else{
        return gcd(b%a,a);
    }
    
}
int main()
{
    int a,b;
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b : ";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}