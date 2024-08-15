#include<iostream>
#include<string>
using namespace std;
void setbit(int num){
    string result="";
    int count=0;
    while (num>0)
    {
        if(num%2==0)
        {
            result=result+"0";
        }
        else
        {
            result=result+"1";
            count++;
        }
        num=num/2;
    }
    
    cout<<"Set bit count : "<<count<<endl;
    
}
int main()
{
    setbit(5);
    return 0;
}