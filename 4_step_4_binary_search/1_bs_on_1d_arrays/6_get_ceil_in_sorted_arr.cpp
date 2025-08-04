#include <bits/stdc++.h>
using namespace std;

int getCeil(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {2, 5, 7, 12, 15, 19};
    int k = 9;
    int result = getCeil(arr, k);
    cout << result << endl;
    return 0;
}

int getCeil(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, ceil = -1;

    while (low <= high)
    {
        int mid = low + (high - low);

        if (arr[mid] == k)
        {
            return arr[mid];
        }
        else if (arr[mid] >= k)
        {
            ceil = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ceil;
}