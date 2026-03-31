#include<iostream>
#include<string>
using namespace std;
void f(string str,string temp,int idx){
    if(idx==str.size()){
        cout <<"["<< temp <<"]"<< endl;
        return;
    }
    //pick call
    f(str, temp + str[idx], idx + 1);
    //not pick call
    f(str, temp, idx + 1);
}
int main()
{
    string str = "abc";
    f(str,"", 0);
    return 0;
}