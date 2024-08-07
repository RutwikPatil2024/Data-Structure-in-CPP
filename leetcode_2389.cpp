#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int nums[] = {4, 5, 2, 1};
    int queries[] = {3, 10, 21};
    int n = sizeof(nums) / sizeof(nums[0]);
    int m = sizeof(queries) / sizeof(queries[0]);
    // sort nums
    sort(nums, nums + n);
    int presum[n];
    presum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        presum[i] = presum[i - 1] + nums[i];
    }
    
    int ans[m];
    for (int i = 0; i < m; i++)
    {
        int len=0;
        for (int j = 0; j < n; j++)
        {
            if(nums[j]>queries[i]) break;
            len++;
        }
        ans[i]=len;
    }
    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
}
