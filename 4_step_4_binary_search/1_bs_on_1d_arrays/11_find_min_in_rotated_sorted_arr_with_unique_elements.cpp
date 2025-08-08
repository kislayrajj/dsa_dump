#include <bits/stdc++.h>
using namespace std;

int findMinimum(vector<int> &arr);

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    int result = findMinimum(arr);
    cout << result << endl;
    return 0;
}

int findMinimum(vector<int> &arr)
{
    int n = arr.size(), low = 0, high = n - 1, ans = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // optimization -----
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        // -------

        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}