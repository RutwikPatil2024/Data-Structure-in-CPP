#include<iostream>
#include<string>
using namespace std;
int count = 0;
void possibleString(int n, string temp, int k){
    // Base case
    if(n == 0){
        if(k == 0){
            count++;
        }
        return;
    }

    // Add '1'
    if(temp.length() >= 1 && temp.back() == '1'){
        possibleString(n-1, temp + '1', k-1);
    } else {
        possibleString(n-1, temp + '1', k);
    }

    // Add '0'
    possibleString(n-1, temp + '0', k);
}

int main(){
    int n, k;
    cin >> n >> k;

    possibleString(n, "", k);

    cout << "Count is : " << count << endl;

    return 0;
}