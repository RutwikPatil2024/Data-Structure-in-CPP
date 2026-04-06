#include<iostream>
#include<string>
using namespace std;
bool cal(char i,char j){
    if(i=='1' and j=='1'){
        return true;
    }
}
int count = 0;
void AbjBC(string x,int k)
{
    int c = 0;
    for (int i = 0; i < x.length();i++)
    {
        if(cal(x[i],x[i+1]) and i!=x.length()-1){
            c++;
        }   
    }
    if(c==k){
        cout << x << endl;
        count++;
    }
}
void possibleString(int n,string temp,int k){
    if(n==0){
        // cout << temp << endl;
        AbjBC(temp,k);
        return;
    }
    possibleString(n-1,temp+'1',k);
    possibleString(n-1,temp+'0',k);
}
int main()
{
    int n,k;
    cin >> n>>k;
    possibleString(n,"",k);
    return 0;
}