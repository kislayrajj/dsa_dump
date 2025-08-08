#include <bits/stdc++.h>
using namespace std;

int findNumOfRotation(vector<int> &arr);

int main()
{
    vector<int> arr = {6, 7, 8, 9, 3, 4, 5};

    int result = findNumOfRotation(arr);
    cout << result << endl;

    return 0;
}

int findNumOfRotation(vector<int> &arr)
{
    int n = arr.size(), low = 0, high = n - 1, minInArr = INT_MAX, idx = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[mid])
        {
            if (minInArr > arr[low])
            {
                minInArr = arr[low];
                idx = low;
            }

            low = mid + 1;
        }
        else
        {
            if (minInArr > arr[mid])
            {
                minInArr = arr[mid];
                idx = mid;
            }

            high = mid - 1;
        }
    }

    return idx;
}