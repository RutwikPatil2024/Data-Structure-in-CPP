#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {10, 5, 2, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 100;
    int count = 0;
    int i = 0;
    int j = 0;
    int product = 1;
    while (j <= n)
    {
        product *= nums[i];
        while (product >= k)
        {
            count += (j - i);
            product /= nums[i];
            i++;
        }
        j++;
    }
    while (i<=n)
    {
        count += (j - i);
        product /= nums[i];
        i++;
    }
    cout<<"max count is : "<<count;
    return 0;
}