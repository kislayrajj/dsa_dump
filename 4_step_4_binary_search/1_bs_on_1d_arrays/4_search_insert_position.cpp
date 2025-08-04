#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> &arr, int target);

int main()
{
    vector<int> arr = {1, 3, 5, 6}; 
    // vector<int> arr = {2, 4, 8, 12, 16, 19};
    int target = 2;
    int result = searchInsertPosition(arr, target);
    cout << result << endl;
    return 0;
}

int searchInsertPosition(vector<int> &arr, int target)
{
    int n = arr.size(), low = 0, high = n - 1, pos = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= target)
        {
            pos = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return pos;
}
