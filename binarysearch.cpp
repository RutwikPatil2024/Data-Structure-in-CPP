#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21};
    int n = 8;
    int x = 18;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == x){
            cout << "target is present "; 
            break;
        }
        else if (arr[mid] > x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return 0;
}