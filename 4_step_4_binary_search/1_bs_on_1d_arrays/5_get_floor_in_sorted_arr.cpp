#include <bits/stdc++.h>
using namespace std;

int getFloor(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {12, 34, 55, 57, 67};
    int k = 1;
    int result = getFloor(arr, k);
    cout << result << endl;
    return 0;
}

int getFloor(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, floor = -1;

    while (low <= high)
    {
        int mid = low + (high - low);

        if (arr[mid] == k)
        {
            return arr[mid];
        }
        else if (arr[mid] <= k)
        {
            floor = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return floor;
}