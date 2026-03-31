#include<iostream>
#include<string>
using namespace std;
int f(string str1,string str2,int i,int j){
    if(i>=str1.size())
        return 0;
    if(j>=str2.size())
        return 0;
    if(str1[i]==str2[j]){
        return 1 + f(str1, str2, i + 1, j + 1);
    }
    else {
        return max(f(str1, str2, i + 1, j), f(str1, str2, i, j + 1));
    }
}
int main()
{
    string str1 = "abc";
    string str2 = "abc";
    cout << f(str1,str2,0,0);
    return 0;
}