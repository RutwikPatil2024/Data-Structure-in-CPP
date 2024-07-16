#include <iostream>
#include <vector>
using namespace std;
void subsequence(vector<int> ans, int arr[], int n, int idx, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    subsequence(ans, arr, n, idx + 1,k);
    ans.push_back(arr[idx]);
    subsequence(ans, arr, n, idx + 1,k);
}
int main()
{
    int n;
    vector<int> ans;
    cout << "Enter the size of arr : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subsequence(ans, arr, n, 0,3);
    return 0;
}