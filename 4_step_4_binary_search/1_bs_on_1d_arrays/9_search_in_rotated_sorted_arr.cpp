#include <bits/stdc++.h>
using namespace std;

// values in arr are distinct (unique)
int searchInRotatedSortedArray(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 7};
    int k = 70;

    int result = searchInRotatedSortedArray(arr, k);
    cout << result << endl;
    return 0;
}

int searchInRotatedSortedArray(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        // if left sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && arr[mid] >= k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right sorted
        else
        {
            if (arr[mid] <= k && arr[high] >= k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}