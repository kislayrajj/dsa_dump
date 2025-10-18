#include <bits/stdc++.h>
using namespace std;

int findSingleElementInSortedArr(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int result = findSingleElementInSortedArr(arr);
    cout << result;
    return 0;
}

int findSingleElementInSortedArr(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
        return arr[0];

    if (arr[0] != arr[1])
        return arr[0];

    if (arr[n - 2] != arr[n - 1])
        return arr[n - 1];

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
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