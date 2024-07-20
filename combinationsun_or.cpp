#include <iostream>
#include <vector>
using namespace std;
void sumcombination(int arr[], vector<int> ans, int n, int idx, int target)
{
    if (target == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    if (idx >= n)
    {
        return;
    }
    // pick kar
    if (arr[idx] <= target)
    {
        ans.push_back(arr[idx]);
        sumcombination(arr, ans, n, idx, target - arr[idx]);
        ans.pop_back();
    }
    // not pick kar
    sumcombination(arr, ans, n, idx + 1, target);
}
int main()
{
    int arr[] = {2, 3, 6, 7};
    int target = 7;
    vector<int> ans;
    int n = sizeof(arr) / sizeof(arr[0]);
    sumcombination(arr, ans, n, 0, target);
    return 0;
}