#include<iostream>
using namespace std;
int flip_bits(int n)
{
    int temp=n;
    temp=temp|(temp>>1);
    temp=temp|(temp>>2);
    temp=temp|(temp>>4);
    temp=temp|(temp>>8);
    // temp=temp|(temp>>16);
    return temp^n;
}
int main()
{
    cout<<flip_bits(11);
    return 0;
}