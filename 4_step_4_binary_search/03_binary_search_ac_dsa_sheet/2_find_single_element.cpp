#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6};
    // vector<int> arr = {3,3,7,7,10,11,11};
    // vector<int> arr = {1,1, 2, 3, 3, 4, 4, 8, 8};
    int result = getSingleElement(arr);
    cout << result << endl;

    return 0;
}

int getSingleElement(vector<int> &arr)
{
    int n = arr.size(), low = 0, high = n - 1;
    if (n == 1)
        return arr[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid == 0 && arr[mid] != arr[mid + 1])
            return arr[mid];
        if (mid == n - 1 && arr[mid] != arr[mid - 1])
            return arr[mid];

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if (mid % 2 == 0)
        {
            if (arr[mid - 1] == arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        else
        {
            if (arr[mid - 1] == arr[mid])
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