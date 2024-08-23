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
    int count=0;
    while (afterxor>0)
    {
        count++;
        afterxor=afterxor&(afterxor-1);
    }
    cout<<count<<endl;
    return 0;
}