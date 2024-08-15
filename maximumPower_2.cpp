#include<iostream>
using namespace std;
int MaximumPower_2(int n)
{
    int temp;
    while(n!=0)
    {
        temp=n;
        n=n&(n-1);
    }
    return temp;
}
int main()
{
    cout<<MaximumPower_2(5);
    return 0;
}