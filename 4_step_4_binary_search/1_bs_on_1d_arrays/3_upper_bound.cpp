#include <bits/stdc++.h>
using namespace std;

// Upper Bound: Smallest index such that arr [index] > k

int getUpperBound(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {2, 3, 5, 5, 6, 13, 15, 18};
    int k = 2;
    int result = getUpperBound(arr, k);
    cout << result << endl;
    return 0;
}

int getUpperBound(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, upperBound = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > k)
        {
            upperBound = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return upperBound;
}