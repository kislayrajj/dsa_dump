#include <bits/stdc++.h>
using namespace std;

int getLowerBound(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 2, 4, 6, 8, 12, 15, 17};
    int k = 3;
    int result = getLowerBound(arr, k);
    cout << result << endl;
    return 0;
}

int getLowerBound(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, lowerBound = n, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= k)
        {
            high = mid - 1;
            lowerBound = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    return lowerBound;
}