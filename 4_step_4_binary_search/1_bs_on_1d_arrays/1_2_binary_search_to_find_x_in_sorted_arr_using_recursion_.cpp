#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int low, int high, int target);

int main()
{
    vector<int> arr = {35, 7, 8, 12, 24};
    int target = 35;
    int n = arr.size();
    int result = binary_search(arr, 0, n - 1, target);
    cout << result << endl;
    return 0;
}

int binary_search(vector<int> &arr, int low, int high, int target)
{
    int mid = low + (high - low) / 2;
    int n = arr.size();
    if (low > high)
        return -1;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return binary_search(arr, low, mid - 1, target);
    return binary_search(arr, mid + 1, high, target);
}
