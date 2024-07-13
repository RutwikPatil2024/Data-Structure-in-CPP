#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 10,2,5,3
    // 3,1,7,11
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(7);
    nums.push_back(11);
    // nums.push_back(10);
    // nums.push_back(2);
    // nums.push_back(5);
    // nums.push_back(3);
    bool flag = false;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (i != j && (nums[i] == 2 * nums[j]))
            {
                // cout << "i : " << nums[i] << "  j : " << nums[j];
                flag = true;
            }
        }
    }
    if(flag==true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}