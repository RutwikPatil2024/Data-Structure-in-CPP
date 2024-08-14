#include<iostream>
#include<string>
using namespace std;
string decimal_binary(int num){
    string result="";
    while (num>0)
    {
        if(num%2==0)
        {
            result=result+"0";
        }
        else
        {
            result=result+"1";
        }
        num=num/2;
    }
    return result;
}
int main()
{
    cout<<decimal_binary(10);
    return 0;
}