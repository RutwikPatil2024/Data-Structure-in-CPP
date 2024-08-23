#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the x : ";
    cin>>x;
    cout<<"Enter the y : ";
    cin>>y;
    int afterxor=x^y;
    int ans=__builtin_popcount(afterxor);
    cout<<ans<<endl;
    return 0;
}