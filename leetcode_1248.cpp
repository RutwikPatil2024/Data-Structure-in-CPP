#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1,1,2,1,1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    int count = 0;
    int odd = 0;
    int ans=0;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if(nums[j]%2!=0)
        {
            odd++;
            count=0;
        }
        while (i<=j && odd==k)
        {
            count++;
            if(nums[i]%2!=0) odd--;
            i++;
        }
        j++;
        ans+=count;
    }
    
    cout << "count is : " << ans;
    return 0;
}