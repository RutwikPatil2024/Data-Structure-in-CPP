#include <iostream>
using namespace std;
int main()
{
    int nums[] = {2, 1, 4, 3, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 10;
    int count = 0;
    int score = 0;
    int sum=0;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        sum+=nums[j];
        score= sum*(j-i+1);
        while (score>=k)
        {
            sum-=nums[i];
            i++;
            score =sum*(j-i+1);
        }
        count+=(j-i+ 1);
        j++;
    }
    cout << "count is : " << count;
    return 0;
}