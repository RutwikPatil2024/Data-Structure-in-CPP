#include<iostream>
#include<string>
using namespace std;
int setbit(int num)
{
    int count=0;
    while (num>0)
    {
        count++;
        num=(num & (num-1));
    }
    return count;
}
int main()
{
    cout<<setbit(5);
    return 0;
}