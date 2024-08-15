#include<iostream>
#include<string>
using namespace std;
int setbit(int num){
    
    return __builtin_popcount(num);
}
int main()
{
    cout<<setbit(5);
    return 0;
}