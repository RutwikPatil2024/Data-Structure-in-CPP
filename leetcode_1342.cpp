#include<iostream>
using namespace std;
int reduce(int n)
{
    if(n==1) return 1;
    if(n%2==0)
    {
        return 1+reduce(n/2);
    }
    if(n%2!=0)
    {
        return 1+reduce(n-1);
    }   
}
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"total number of steps : "<<reduce(n);
    return 0;
}
    