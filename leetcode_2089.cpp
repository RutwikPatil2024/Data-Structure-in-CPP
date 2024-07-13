#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // 1,2,5,2,3
    vector<int> nums;
    vector<int> ans;
    int target = 2;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(3);
    sort(nums.begin(), nums.end());
    for (int i = 0; i < (nums.size()); i++)
    {
        if (nums[i] == target)
        {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < (ans.size()); i++)
    {
        cout<<" "<<ans[i];
    }
    return 0;
}
