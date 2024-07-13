#include <iostream>
#include <vector>
using namespace std;
void subset(vector<int> temp, int arr[], int n, int idx, bool flag)
{
    if (idx == n)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }

    if((idx>0 and arr[idx]==arr[idx-1]) and flag==true)
    {
        
    }
}
int main()
{
    int arr[] = {1, 1, 2};
    vector<int> temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    subset(temp, arr, n, 0, true);
    return 0;
}