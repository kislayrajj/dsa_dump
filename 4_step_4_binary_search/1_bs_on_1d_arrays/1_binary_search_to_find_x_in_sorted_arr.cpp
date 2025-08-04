#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target);

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 12;
    int result = binarySearch(arr, target);
    cout << result << endl;
    return 0;
}

int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size(), low = 0, high = n - 1;

    while (low <= high)
    {
        // int mid = (low + high) / 2;
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}