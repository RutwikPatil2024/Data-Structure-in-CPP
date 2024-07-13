#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // nums = [3,4,5,2]   ans =  12
    //1,5,4,5   ans=16
    //3,7
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(7);
    // nums.push_back(4);
    // nums.push_back(5);
    int product = -1;
    int size = nums.size();
    for (int i = 0; i < size ; i++)
    {
        for (int j = 1; j < size ; j++)
        {
            if (i != j)
            {
                int ans = (nums[i] - 1) * (nums[j] - 1);
                if (product < ans)
                {
                    product = ans;
                }
            }
        }
    }
    cout << "Maximum product is : " << product;
    return 0;
}