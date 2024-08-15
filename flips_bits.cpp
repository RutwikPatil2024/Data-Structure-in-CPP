#include <iostream>
using namespace std;
int flip_bits(int n)
{
    int x=n;
    int temp;
    while (x != 0)
    {
        temp = x;
        x=x&(x-1);
    }
    temp=temp<<1;
    temp=temp-1;
    return temp ^ n;
}
int main()
{
    cout << flip_bits(11);
    return 0;
}