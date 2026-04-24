#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int f(vector<int>& nums, int i){
    int ans = 0;
    for(int j = 0; j < i; j++){
        if(nums[j] < nums[i]){
            ans = max(ans, f(nums, j));
        }
    }

    return 1 + ans;
}

int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};

    int result = 0;

    for(int i = 0; i < nums.size(); i++){
        result = max(result, f(nums, i));
    }

    cout << result;

    return 0;
}