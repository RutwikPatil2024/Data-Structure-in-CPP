#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    // nums.push_back(3);
    nums.push_back(0);
    nums.push_back(1);
    int sum = 0;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    int total=(size*(size+1)/2);
    // cout<<"total sum of n number is : "<<total;
    cout<<"Missing number is = "<<total-sum;
    return 0;
}