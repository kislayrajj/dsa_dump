#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> &arr, int k);

int main()
{
    // vector<int> arr = {5, 6, 1, 2, 3, 3, 3, 4, 4, 4};
    // vector<int> arr = {1,0,1,1,1};
    vector<int> arr = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int k = 2;
    if (isPresent(arr, k))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}

bool isPresent(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            return true;
        }

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }

        // left sorted
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

    return false;
}