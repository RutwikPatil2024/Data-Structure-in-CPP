#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int f(vector<int> &arrc, vector<int> &arra, int i,int x)
{
    if(i == arrc.size()){
        return 0;
    }

    if(x==0){
        return arra[i] + f(arrc, arra, i+1,x);
    }

    if(x == (arrc.size() - i)){
        return arrc[i] + f(arrc, arra, i+1,x);
    }

    return min(
        arra[i] + f(arrc, arra, i+1,x),
        arrc[i] + f(arrc, arra, i+1, x)
    );
}
int main()
{
    vector<int> arra = {5000,6000,8000,9000};
    vector<int> arrc = {3000,2000,1000,6000};
    cout << f(arrc, arra, 0, 0);
    return 0;
}