#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int f(vector<int> &arrc, vector<int> &arra, int i, int ca, int cc)
{
    if(i == arrc.size()){
        return 0;
    }

    if(ca == cc){
        return arra[i] + f(arrc, arra, i+1, ca+1, cc);
    }

    if((ca - cc) == (arrc.size() - i)){
        return arrc[i] + f(arrc, arra, i+1, ca, cc+1);
    }

    return min(
        arra[i] + f(arrc, arra, i+1, ca+1, cc),
        arrc[i] + f(arrc, arra, i+1, ca, cc+1)
    );
}
int main()
{
    vector<int> arra = {5000,6000,8000,9000};
    vector<int> arrc = {3000,2000,1000,6000};
    cout << f(arrc, arra, 0, 0, 0);
    return 0;
}