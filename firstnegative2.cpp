#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans;
    int p = -1;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            p = i;
            break;
        }
    }
    if (p == -1)
        ans.push_back(1);
    else
        ans.push_back(arr[p]);
    // cout<<arr[p]<<" ";
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (p >= i)
            ans.push_back(arr[p]);
        else
        {
            p = -1;
            for (int x = i; x <= j; x++)
            {
                if (arr[x] < 0)
                {
                    p = x;
                    break;
                }
            }
            if (p == -1)
                ans.push_back(1);
            else
                ans.push_back(arr[p]);
        }
        i++;
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}